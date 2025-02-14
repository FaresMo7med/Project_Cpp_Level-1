#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
int hour,minute,second;
        
    cout<<"enter the second :";        cin>>second;
    cout<<"enter the minute :";        cin>>minute;
    cout<<"enter the hour   :";        cin>>  hour;


for (;;)
{
    Sleep(900);
    system("cls");
    second++;
    if(second>59)
    {
        minute++;
        second=00;
            if(minute>59)
            {
            hour++;
            minute=00;
                if(hour>23)
                {
                hour=00;
                }
            }  
    }   
    
cout<<hour<<":"<<minute<<":"<<second;
}
}