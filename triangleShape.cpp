#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int length, height;
  char symbol;

  cout<<"Length: ";
  cin>>length;
  cout<<"Symbol: ";
  cin>>symbol;

  for (int i = length; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout<<setw(3)<<symbol;
    }
    cout<<endl;
    
  }
  

}