#include <iostream>
using namespace std;
int main()
{
    float basic, gross, da, hra;
    cout<<"Enter basic salary of an employee: "<<endl;
    cin >>basic;

    if(basic <= 10000)
    { 
	hra = basic * 0.2;
        da  = basic * 0.8;
    }
    else if(basic <= 20000)
    {
        hra = basic * 0.25;
 	da  = basic * 0.9;
    }
    else
    {
	 hra = basic * 0.3;
         da  = basic * 0.95;
    }   
    
    gross = basic + hra + da;

    cout<<"GROSS SALARY OF EMPLOYEE = "<< gross;

    return 0;
}

