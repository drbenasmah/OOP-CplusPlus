#include<iostream>
using namespace std;

int main()
{
  float weight, height, bmi;

  cout<<"Enter your weight "<<endl;
  cin>>weight;
  cout<<"Enter your height "<<endl;
  cin>>height;

  bmi = weight / (height * height);

  if (bmi < 18.5)
  
    cout<<"underweight";

  else if (bmi > 25)
  
    cout<<"overweight";
  

  else
  
    cout<<"Normal weight";
  
 

}