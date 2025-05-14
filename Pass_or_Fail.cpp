#include<iostream>
using namespace std;
int main()
{ start:
  int marks;
  cout<<"Enter Your Marks Here : ";
  cin>>marks;
  if(marks>33)
  {
    cout<<"Pass "<<endl;
  }
  else{
    cout<<"Fail"<<endl;
  }
  goto start;
  return 0;
}
