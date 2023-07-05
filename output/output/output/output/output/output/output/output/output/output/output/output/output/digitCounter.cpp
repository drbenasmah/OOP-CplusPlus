#include<iostream>
using namespace std;

int main()
{
  int number, counter;

  cout<<"Enter number: \n";
  cin>>number;

  counter = 0;

  while (number > 0)
  {
    number/=10;

    counter++;
  }
  cout<<counter;

}