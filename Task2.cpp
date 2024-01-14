#include<iostream>
using namespace std;
int add(int a,int b)
{
  return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    
    return a*b;
}
int divi(int a,int b)
{
    return a/b;
}
int main()
{
    cout<<"                                             SIMPLE CALCULATOR\n";
    cout<<"This calculator allows you to perform simple arithmetic operation where you have to input the operands and \n                                     choose the operation of your choice\n\n";
    int flag=1;
    while(flag)
    {
        int a,b;
        cout<<"\nEnter the first number :  ";
        cin>>a;
        cout<<"\nEnter the second number :  ";
        cin>>b;
        cout<<"\nThe operations are: \n";
        cout<<"1 : ADDITION(+) \n2 : SUBTRACTION(-)\n3 : MULTIPLICATION(*)\n4 : DIVISION(/)\n\n";
        char op;
        cout<<"Choose the operator(+,-,*,/): ";
        cin>>op;
        cout<<endl;
        switch(op)
        {
            case '+':
                cout<<a<<" "<<op<<" "<<b<<" "<<"="<<" "<<add(a,b)<<endl;
                break;
            case '-':
                cout<<a<<" "<<op<<" "<<b<<" "<<"="<<" "<<sub(a,b)<<endl;
                break;
            case '*':
                cout<<a<<" "<<op<<" "<<b<<" "<<"="<<" "<<mul(a,b)<<endl;
                break;
            case '/':
                cout<<a<<" "<<op<<" "<<b<<" "<<"="<<" "<<divi(a,b)<<endl;
                break; 
            default:
                cout<<"Invalid Operator\n";  
        }
        cout<<"\nEnter '1' to continue or '0' to exit....\n";
        cin>>flag;
    }
}