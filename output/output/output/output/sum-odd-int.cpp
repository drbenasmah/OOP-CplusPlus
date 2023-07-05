#include<iostream>

int i;int sum=0;
int main()
{
for ( i = 1; i<=15; i++)
{
  std::cout<<"i = "<<i<<std::endl;
  if (i%2 !=0)
  
    sum= sum + i;
  
  
  
}

std::cout<<"sum = "<<sum<<std::endl;

  return 0;
}
