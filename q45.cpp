#include<iostream>
using namespace std;
int main()
{
 	int a,b;
	cout <<"enter any two numbers : "<<endl;
	cin >> a >>b;
	while (a!=b)
	{
	  if (a>b)
	   a -= b;
	  else
	    b -=a; 
	}	
	cout <<"HCF= "<<a;
	return 0;
}
