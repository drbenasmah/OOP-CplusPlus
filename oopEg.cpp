#include<iostream>
using namespace std;
using std::string;

class Employee
{
  public:
      string Name;
      string Company;
      int Age;

      void IntroduceYourself()
      {
        cout<<"Name - "<< Name <<endl;
      }
};
int main()
{

}

Employee::Employee(/* args */)
{
}

Employee::~Employee()
{
}
