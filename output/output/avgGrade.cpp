#include<iostream>
using namespace std;

int main()
{
  int grade;
  int sum = 0;
  int avgGrade = 0;

  for ( int i = 0; i < 3; i++)
  {
    do
    {
      cout<<"Grade "<< i+1 <<endl;
      cin>>grade;
    } while (grade <=0 || grade >3);
    sum += grade;
    
  }
  cout<<"Grade sum = "<<sum<<endl;

  cout<<"Average Grade = "<<sum / 3.0;
  
}