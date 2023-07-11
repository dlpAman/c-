#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character:";
    cin>>button;
switch (button)
{
case 'a':
cout<<"hello:"<<endl;
break;
case 'b':
cout<<"namaste:"<<endl;
break;
case 'c':
cout<<"salute:"<<endl;
break;
default:
cout<<"case not match:"<<endl;
 break;
}
 return 0;
}