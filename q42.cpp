#include <iostream>

using namespace std;

int main() {
int a,b,i,d;
cout << "Enter base & exponent respectively : ";
cin >> a ;
cin>> b;
d=a;
for( i=1 ; i<b; i++)
{
	d=d*a;
	
}
cout << d;
return 0;
}
