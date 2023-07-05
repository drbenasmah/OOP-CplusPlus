#include<iostream>

int n;int sum=0;
int main()
{
do
{
  sum= sum + n;
  std::cout<<"Enter a number: "<<std::endl;
  std::cin>>n;
  
} while (n>=0);

 std::cout<<"sum = "<<sum<<std::endl; 

  return 0;
}
