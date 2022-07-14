#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  double distance, amount=0;

  cout<<"Enter distance :";
  cin>>distance;

  if(distance<=30)
  {
    amount=distance * 50;
  }
  else if (distance>30)
  {
    amount=(distance-30) * 40 + 30*50;
  }
  else 
  {
    cout<<"invalid";
  }
  cout<<"amount is"<<fixed<<setprecision(2)<<amount<<endl;
  return 0;
}