#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"enter the value of a and b :"<<endl;
    cin>>a>>b;
    char op;
    cout<<"input operator:"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<a+b<<endl; 
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
      default:
      cout<<"wrong input"<<endl;
        break;
    }
    return 0;
}