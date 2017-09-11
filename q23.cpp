#include<iostream>
using namespace std;
int main()
{
	int m;
        cout <<"enter a natural number"<<endl;
	cin >>m;
 	cout <<"all natural numbers upto "<<m<< "in reverse order"<<endl;
        while (m>0)
        	{
		  cout << m<<endl;
		  m=m-1;
		}
	return 0;
}
