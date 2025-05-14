#include<iostream>
using namespace std;
int main()
{
  start:
  int package;
  cout<<"Enter Your Package Here : ";
  cin>>package;
  if(package>=15)
  {
    cout<<"Offer Accepted.."<<endl;
  }
  else{
    cout<<"Offer Rejected ..."<<endl;
  }
  goto start;
  return 0;
}