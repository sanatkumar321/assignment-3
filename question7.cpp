#include<iostream>
using namespace std;
int main()
{
	char al;
	cout << "enter a character"<<endl;
	cin>>al;
	if ( (al>=65) && (al<=90) || (al>=97) && (al<=122))
		{ cout<<al<< " is an alphabet";
		}  
	else {cout << al<< " is not an alpabet";}
	return 0;
}
