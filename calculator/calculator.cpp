#include<iostream>
using namespace std;
int main()
{double a,b;
char c;
int d=1;
do
{cout<<"enter the first number: ";
cin>>a;
cout<<"enter the second number: ";
cin>>b;
cout<<"enter  + - * / ";
cin>>c;

switch(c)
{case '+':
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
default :
cout<<"The operation code is incorrect"<<endl;
break;}

cout<<"Enter the number zero if you want to exit. Press any other number to perform another calculation: ";
cin>>d;}  while(d>0);}