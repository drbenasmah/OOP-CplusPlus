#include<iostream>
using namespace std;

void showMenu()
{
  cout<<"**********Menu**********"<<endl;
  cout<<"1. Balance"<<endl;
  cout<<"2. Deposit"<<endl;
  cout<<"3. Withdrawal"<<endl;
  cout<<"4. Exit"<<endl;
  cout<<"************************"<<endl;
}

int main()
{
  showMenu();
  double balance = 500;
  double deposit, withdrawal;
  int option;

  cout<<"Select option: ";
  cin>>option;
  system("clear");

  switch (option)
  {
  case 1:cout<<"Balance = $"<<balance;
          break;

  case 2:cout<<"Deposit Amount = $";
          cin>>deposit;
          cout<<"You have successfully deposited $"<<deposit<<"."<<endl;
          break;

  case 3:cout<<"Balance = $"<<balance;break;

  
  default:
    break;
  }
}