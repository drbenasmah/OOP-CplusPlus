#include<iostream>
using namespace std;

int main()
{
  int number = 0, reverseNum = 0;

  cout<<"Number: ";
  cin>>number;

  while (number != 0)
  {
    reverseNum *= 10;

    int lastDigit = number % 10;
    reverseNum += lastDigit;

    number /= 10;
    cout<<"Reversed: "<< reverseNum;

    
  }
  
}