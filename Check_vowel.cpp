#include<iostream>
using namespace std;
int main()
{   start:
  char n;
  cout<<"Enter a Alphabet Here : ";
  cin>>n;
  if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'|| n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
  {
    cout<<"This is a Vowel."<<endl;
  }
  else{
    cout<<"Not Vowel."<<endl;
  }
  goto start;
  return 0;
}