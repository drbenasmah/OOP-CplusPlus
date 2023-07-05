#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  int area=0;

  cout<<"What is the 3 sizes of the triangle? "<<endl;
  cin>>a>>b>>c;

  if (a==b && b==c)
  {
    cout<<"This is equilateral triangle";
 
  }

  else if (a!=b && b!=c && a!=c)
  {
    cout<<"This is sclene triangle";
  }

  else
  {
    cout<<"This is isoscelles triangle";
  }
   area = a * b * c;
   cout<<"area is = "<<area;

   return 0;
}