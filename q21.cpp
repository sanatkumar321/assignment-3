#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	float units,amt, sur;
	cout << "unit consumed : ";
        cin >>units;
	if (units<=50){
     				amt= 0.5*units;
		       }
	else if (units<=150){
				amt= 25 + 0.75*units;
	                    }
	else if (units<=250){
		             amt=100 + 1.20*units;
	                    }
	else {
		amt= 220 + 1.5*units;
              }
	sur= amt*0.2;
	
	cout<<"the total electricity bill = Rs."<< fixed << setprecision(2) <<(amt + sur);
	
 	return 0;
}
