#include<iostream>
#include<stack>
using namespace std;

int pri(char ch)
{
        switch (ch)
    {
    	case '(':
    		return 1;
	    case '+':
	    case '-':
	        return 2;

	    case '*':
	    case '/':
	        return 3;

	    case '^':
	        return 4;
    }
    return -1;
}

int calculate(char op, int l , int r){
	if(op == '+'){
		return l + r;
	}else if(op == '-'){
		return l - r ;
	}else if(op == '*'){
		return l * r;
	}else if(op == '/'){
		if(r > 0){
			return l/r;
		}
		return 0;
	}else if(op == '^'){
		return l ^ r;
	}
	return -1;
}

int main(int argc, char *argv[]){
	FILE *fp;
 char *filename;

  // Check if a filename has been specified in the command
  if (argc < 2)
   {
        printf("Missing Filename\n");
        return(1);
   }
   else
  {
        filename = argv[1];
        printf("Filename : %s\n", filename);
   }
   // Open file in read-only mode
   fp = fopen(filename,"r");
     if ( fp )
      {
        printf("***File contents***\n");
           
 
       }
   else
      {
         printf("Failed to open the file\n");
        }

char str[100] = "3+(2*4)";

	int l = sizeof(str)/sizeof(char);
	int k = 0;
	stack<char> s;
	stack<int> op_s;
	cout <<"InFix Expression: " << str << endl;
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] == '('){
			s.push('(');
		}else if(str[i] == ')'){
			while(s.top() != '('){
				int r = op_s.top();
				op_s.pop();
				int l = op_s.top();
				op_s.pop();
				int re = calculate(s.top(),l,r);
				op_s.push(re);
			  s.pop(); 
			}
			s.pop();
		}else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^'){
			int pC = pri(str[i]);
			while(!s.empty() && pri(s.top()) >= pC){
				int r = op_s.top();
				op_s.pop();
				int l = op_s.top();
				op_s.pop();
				int re = calculate(s.top(),l,r);
				op_s.push(re);
				s.pop(); 
			}
			s.push(str[i]);
		}else{
			op_s.push(int(str[i])- 48);
		}
		i++;
	}
	while(!s.empty()){
		int r = op_s.top();
		op_s.pop();
		int l = op_s.top();
		op_s.pop();
		int re = calculate(s.top(),l,r);
		op_s.push(re);
		s.pop(); 
	}
	cout <<"Result: " << op_s.top() << endl;
	return 0;
}
