#include<iostream>
using namespace std;
int main()
{
	char al;
	cout<< "enter an alphabet"<<endl;
	cin>>al;
	if(al=='a' || al=='e' ||al=='i' || al=='o' || al=='u' || al=='A' || al== 'E' || al=='O' || al=='U' ||al=='I')
	{cout<<al<<" is a vowel";
	}
	else {cout <<al<< " is a consonant";}
	return 0;
}

