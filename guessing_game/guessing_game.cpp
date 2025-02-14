#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int Random()
    {
    system("cls");
    int Random,num;
    cout<<"enter your number {1 to 100}"<<endl;
    cout<<"enter 0 if you went to exit"<<endl;
    srand(time(0));
    Random=rand()%100+1;
    do{
        cin>>num;
    if(Random==num)
        {
        cout<<"winner winner chack dinner\n";
        cout<<"enter a number to start a new game : ";
        int xx;
        cin>>xx;
        }
    else if(Random>num && num!=0)
        {
        cout<<"high"<<endl;
        }
        else if(Random<num && num!=0)
        {
        cout<<"low"<<endl;
        }
    else
        {
    exit(0);
        }} while(Random!=num);
    }
int main(){for(;;){Random();}}