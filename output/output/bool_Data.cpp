#include<iostream>
using namespace std;


int main()
{
  int x = 10;
  float y = 12.5;
  float z = true + x + false + y;
  cout<<z<<endl;

  if (x<y)
  {
    cout<<"x is lesser"<<endl;
  }
  else
  {
    cout<<"y is lesser"<<endl;
  }
  
  
  
  cout<<sizeof(bool)<<endl;
  // cout<<sizeof(void)<<endl;
  return 0;
}