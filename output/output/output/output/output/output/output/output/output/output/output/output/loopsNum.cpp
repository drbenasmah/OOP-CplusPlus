#include<iostream>
using namespace std;

int main()
{
  int i;

  for (i = 100; i <= 500; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      cout<<i<<" is divisible"<<endl;
    }
    
  }
  
}