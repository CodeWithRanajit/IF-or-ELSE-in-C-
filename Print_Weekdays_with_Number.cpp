#include<iostream>
using namespace std;
int main()
{    start:
  int days; 
  cout<<"Enter a Days Between (1 to 7) : ";
  cin>>days;
  if(days>7 || days<1)
  {
    cout<<"Invalid Days. Plz enter a Valid Day."<<endl;
  }
  else if(days==1)
  {
    cout<<"Today is Monday.."<<endl;
  }
  else if(days==2)
  {
      cout<<"Today is Tuesday.."<<endl;
  }
    else if(days==3)
  {
      cout<<"Today is Wednesday.."<<endl;
  }
    else if(days==4)
  {
      cout<<"Today is Thrusday.."<<endl;
  }
    else if(days==5)
  {
      cout<<"Today is Friday.."<<endl;
  }
    else if(days==6)
  {
      cout<<"Today is Satarday.."<<endl;
  }
    else
  {
      cout<<"Today is Sunday.."<<endl;
  }
  goto start;
  return 0;
}