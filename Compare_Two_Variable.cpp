#include<iostream>
using namespace std;
int main()
{  
  start:
  int a,b;
  cout<<"Enter a First Number Here : ";
  cin>>a;
  cout<<"Enter a Second Number Here : ";
  cin>>b;
  if(a>b)
  {
    cout<<a<<" is Greater Then "<<b<<endl;
  }
  else{
    cout<<b<<" is Greater then "<<a<<endl;
  }
  goto start;
  return 0;
}