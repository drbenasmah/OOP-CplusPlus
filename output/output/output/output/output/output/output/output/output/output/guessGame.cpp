#include<iostream>
using namespace std;

int main()
{
  int hostnum, guessnum;

  cout<<"Host nmuber: "<<endl;
  cin>>hostnum;
  system("clear"); //To clear the console and hide host number


  cout<<"Guess nmuber: "<<endl;
  cin>>guessnum;

  //Tenary operator
  (hostnum == guessnum)? cout<<"Correct!!!" : cout<<"Failed !";

  // if (hostnum == guessnum)
  //   cout<<"Correct!!!";

  // else
  //   cout<<"Failed !";
  
  
}