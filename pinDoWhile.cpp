#include<iostream>
using namespace std;

int main()
{
  int userPin, pin, errorCounter = 0;

  do
  {
    userPin = 1234;
    cout<<"Pin: ";
    cin>>pin;

    if (userPin != pin)
    errorCounter++;
    
  } while ( errorCounter < 3 && userPin != pin);

  if (errorCounter < 3)
  cout<<"Loading ... ";

  else
  cout<<"Blocked ...";
  
  
}