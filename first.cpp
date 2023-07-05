#include  <iostream>

int main()
{
  int age; 
  char name[50];

  std::cout<<"What's your name? "<<std::endl;
  std::cin>>name;
  std::cout<<"How old are you? "<<std::endl;
  std::cin>>age;
  std::cout<<"Hello "<<name<<" your age is "<<age<<"."<<std::endl;

  return 0;
}