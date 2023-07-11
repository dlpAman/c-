#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;

    if(savings>5000)
    {
      if(savings>10000)
      {
        cout<<"neha\n"; 
        cout<<"roadtrip\n";
      }
      else
      {
        cout<<"restraunt\n";
      }
    }
    else if(savings>2000)
    {
        cout<<"rashmi\n";
    }
    else
    {
         cout<<"himanshu\n";
    }
}