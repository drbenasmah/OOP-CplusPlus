#include<iostream>

int main()
{
  int money,age;

  std::cout<<"How much money do you have? "<<std::endl;
  std::cin>>money;
  std::cout<<"How old are you? "<<std::endl;
  std::cin>>age;

  if (money >= 1000 && age > 20)
  {
    std::cout<<"Let's have coffee at starbucks "<<std::endl;
    std::cout<<"Let's go home "<<std::endl;
  }

  else
  {
    std::cout<<"Let's have coffee at ccd "<<std::endl;
    std::cout<<"Let's go to school "<<std::endl;
  }

  std::cout<<"Ok ! I got it now ";
  


  return 0;
  
}