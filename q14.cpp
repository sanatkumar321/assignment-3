#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout << "enter the three angles of triangle :"<<endl;
  cin >>a;
  cin >>b;
  cin >>c;
  if (a+b+c==180)
		{cout <<"valid";
		}
  else {cout<<"invalid";}
 return 0;

} 
