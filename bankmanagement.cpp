#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class bank 
{
    char name[100],add[100],y;
    int balance;
    public:
    void open_account();
    void Deposit_money();
    void Withdraw_money();
    void display_amount();
};
void bank :: open_account()
{
    cout<<"Enter your full name: "<<name<<endl;
    cin.ignore();
    cin.getline(name,100);
    cin.ignore();
    cout<<"Enter your address: "<<endl;
    cin.getline(add,100);
    cout<<"What type of account you want to open saving (s) or current (c): "<<endl;
    cin>>y;
    cout<<"Enter amount for deposit :: ";
    cin>>balance;
    cout<<"Your account has been created \n";
}
void bank :: Deposit_money()
{
    int a;
    cout<<"Enter how much you want to deposit: "<<endl;
    cin>>a;
    balance += a;
    cout<<"Your total balance is: \t"<<balance<<endl;
}
void bank :: display_amount()
{
    cout<<"Your Full Name :: \t"<<name<<endl;
    cout<<"your address :: \t"<<add<<endl;
    cout<<"Type of account that you open :: \t"<<y<<endl;
    cout<<"Remaining balance in your account :: \t"<<balance<<endl;
}
void bank :: Withdraw_money()
{
    float amount;
    cout<<"\n Withdraw:: ";
    cout<<"Enter amount to withdraw :: ";
    cin>>amount;
    balance -= amount;
    cout<<"Your remaining balance is :: "<<balance<<endl; 
}
int main()
{
    bank obj;
    int ch,x;
    do
    {
    cout<<"Press-1 New account \n";
    cout<<"Press-2 Deposite money \n";
    cout<<"Press-3 Withdraw money \n";
    cout<<"Press-4 Display money \n";
    cout<<"Press-5 Exit \n"; 
    cout<<"select the option from above \n";
    cin>>ch;
    switch (ch)
    {
    case 1:"1)open account \n";/* constant-expression */
        obj.open_account();
        break;
        case 2: "2) Deposit money \n";
        obj.Deposit_money();
        break;
        case 3: "3) withdraw money \n";
        obj.Withdraw_money();
        break;
        case 4: "4) display money \n";
        obj.display_amount();
        break;
        case 5: 
        if (ch == 5)
        {
            exit(0);
        }
        
    default: 
    cout<<"error \n";
        break;
    }
    cout<<"\n Do you want to select next option then press :: y \n"; 
    cout<<"If you want to exit then press :: N"<<endl;
    
    x = getch();
    
    if (x=='n'||x=='N')
    {
        system("CLS");
        cout<<"\t\t\t\t Thanks for choosing"; 
    }
    }
    while (x=='y'||x=='Y');
    getch();
    return 0;
}