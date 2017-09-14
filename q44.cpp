#include <iostream>
using namespace std;

int main()
{
    int a,b=1 ;
    cout << "enter a number : ";
    cin >>a;
    while (a>0)
	{
	  b=b*a;
	  a--;
	}
    cout <<b;
    return 0;
}
