#include<iostream>
using namespace std;
int main()
{  start:
  int age;
  cout<<"Enter Your age Here : ";
  cin>>age;
  if(age>=18)
  {
    cout<<"You Can Vote"<<endl;
  }
  else{
    cout<<"You Cannot Vote "<<endl;
  }
  goto start;
  return 0;
}