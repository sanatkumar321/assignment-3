#include<iostream>
using namespace std;
int main()
{
	int a ;
	cout << "enter your number "<< endl;
	cin>>a;
	if ( (a%55)==0)
	{ 
		
		cout << a << " is divisible by 5 and 11";
		    }
	else if ( (a%55)!=0) {
		     if ( (a%5)==0 && (a%11)!=0){
				cout << a <<" is divisible by 5 but not by 11";
				}
		     else if ( (a%5)!=0 && (a%11)==0){
						cout <<a << " is divisible by 11 but not by 5";
						}
			 }
  	if ( (a%5)!=0 && (a%11)!=0) {cout << a << " not divisible by 5 or 11";} 
 	return 0;
}
