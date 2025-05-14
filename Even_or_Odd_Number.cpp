#include<iostream>
using namespace std;
int main()
{ start:
  int n;
  cout<<"Enter a Number Here : ";
  cin>>n;
  if(n<0)
  {
    cout<<"Negative Number . Enter A Positive Number.."<<endl;
  }
  else if(n%2==0)
  {
    cout<<"Even Number ...."<<endl;
  }
  else{
    cout<<"Odd Number ..."<<endl;
  }
  goto start;
  return 0;
}