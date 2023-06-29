/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
#include <conio.h>

using namespace std;
class bank {
    
    char name[100],add[100],y;
    int balance;
    
    public:  
    void open_account();
     void deposit_money();
      void withdraw_money();
       void Display_account();
       
};

void bank:: open_account()//resolution operator

{
    cout<<"Enter full name: ";
    cin.ignore();
    cin.getline(name,100);
    
    cout<<"Enter your address: ";
    cin.ignore();
    cin.getline(add,100);
    
    cout<<"What type of account you want to open saving(s) or current(c): ";
    cin>>y;
    
    cout<<"Enter amount for deposit: ";
    cin>>balance;
    
    cout<<"your account is created\n";
    
}

void bank::deposit_money(){
    int a;
    cout<<"Enter how much you deposite :";
    cin>>a;
    balance+=a;
    cout<<"Total amount you deposit:\t"<<balance;
}

void bank::Display_account(){
    cout<<"your full name :\t"<<name;
    cout<<"your address : \t"<<add;
    cout<<"Type of account that you open :\t"<<y;
    cout<<"Amount you deposit :\t"<<balance;
}

void bank:: withdraw_money(){
    float amount;
    cout<<"\n withdraw :";
    cout<<"Enter amount to withdra :";
    cin>>amount;
    balance-=amount;
    cout<<"Now totaL amount left"<<balance;
    
}
int main()
{
    int ch,x;
    bank obj;
    do{
    cout<<"1) Open account \n";
     cout<<"2) deposit money \n";
      cout<<"3) withdraw money \n";
       cout<<"4) Display account \n";
        cout<<"5) Exit \n";
        cout<<"setect the option from above \n";
        cin>>ch;
        
        switch(ch){
            case 1:"1) Open account \n";
            obj.open_account();
            break;
            
            case 2:"2) deposit money \n";
            obj.deposit_money();
            break;
            
            case 3:"3) withdraw money";
            obj.withdraw_money();
            break;
            
            case 4:"4) Display account \n";
            obj.Display_account();
            break;
            
            case 5:
                 if(ch==5)
                 {
                     exit(1);
                 }
                 
           default:
           cout<<"this is not exit try again \n";
           
        }
     
  cout<<"\n do you want to select next option then press : y \n";
  
  cout<<"if you want to exit then press : N";
  
  x=getch();
  if(x=='n' || x=='N')
  exit(0);
  
    }while(x=='y'|| x=='Y');
    
  
getch();
    return 0;
}
