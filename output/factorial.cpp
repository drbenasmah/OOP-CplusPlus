#include<iostream>
using namespace std;

int main()
{
  int number, i;
  int factorial = 1;

  cout<<"Number: ";
  cin>>number;

  for ( i = number; i >= 1; i--)
  factorial = factorial * i;

  cout<<number<<"!"<<" = "<<factorial;
  
}