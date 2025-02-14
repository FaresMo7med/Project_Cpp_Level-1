#include<iostream>
using namespace std;
class ATM
{
private:
    string name;
    int Password;
    double balance;
    int choic;
public:
    ATM()
        {
        cout<<"enter your name : ";                                 cin>>name;
        cout<<"enter your password : ";                             cin>>Password;
        cout<<"enter the deposit balance : ";                       cin>>balance;
        }
    void home()
        {
        int password=0;
        cout<<"enter your password :";                                cin>>password;
        if(password==Password)
            {
            do{
            cout<<"hello mr:"<<name<<endl;
            int x;
            cout<<"******************************"<<endl;
            cout<<"1-Your current balance"<<endl;
            cout<<"2-Deposit"<<endl;
            cout<<"3-withdraw"<<endl;
            cout<<"4-exit"<<endl;
            cout<<"******************************"<<endl;
            cout<<"enter your choic form 1 to 4  :  ";                   cin>>choic;
            if(choic==1)
                {
                cout<<"your account balance :"<<balance<<endl;
                }
            else if(choic==2)
                {
                cout<<"enter the deposit amount :";                 cin>>x;
                balance+=x;
                }
            else if (choic==3)
                {
                cout<<"enter the withdraw amount :";                cin>>x;
                if(x>balance)
                {
                cout<<"your balance is not enough"<<endl;
                }
                else
                {balance-=x;}
                }
            else if (choic==4)
                {
                cout<<"thanks you";
                }
            else
                {
                cout<<"your choic is incorrect";
                }} while (choic!=4);
            }   
        else
        {
        cout<<"the password is incorrect";
        }
        }
};
int main()
{
ATM ob1;
int Choic=1;
ob1.home();
}