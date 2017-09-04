#include<iostream>
using namespace std;
int main()
{
	char al;
	cout << "enter a alphabet"<<endl;
	cin>>al;
	if ( (al>=65) && (al<=90)) 
        {cout << " uppercase ";
	}

  	else if ((al>=97) && (al<=122))
		{ cout<< " lowercase";
		}  
	
	return 0;
}
