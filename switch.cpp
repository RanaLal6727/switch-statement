#include <iostream>
using namespace std ; 
int main()
{
	float a= 7;
	float b= 9;
	char op;
	cout << "enter thye oprater :"<<op;
	cin>> op;
    
    switch(op)
    {
     case '+':
     	cout<< "a+b ="<< a+b << endl;
     	break ;
     	
     	case '-':
     		cout << "a-b =" << a-b << endl;
     		break ;
     		
     		case '*':
     			cout << "a*b =" << a*b ;
     			break;
     			
     			case '/':
     				cout << "a/b =" << a/b << endl;
     				break;
     				
     				default:
     					cout << " invalid oprater";
     					break;
     
}
  return 0;	
}
