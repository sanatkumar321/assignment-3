#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout << "enter the three sides of triangle :"<<endl;
  cin >>a;
  cin >>b;
  cin >>c;
  if (a<(b+c)|| b<(c+a)|| c<(b+a))
		{cout <<"valid";
		}
  else {cout<<"invalid";}
 return 0;

}  
