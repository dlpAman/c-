#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
      if (a>c)
      {
        cout<<"a is greater\n";
      }
      else 
      {
        cout<<"c is greatest\n";
      }
    }
    else
    {
        if(b>c)
        {
            cout<<"b is greatest\n";
        }
        else 
        {
            cout<<"c is greatest\n";
        }
    }
    return 0;
}