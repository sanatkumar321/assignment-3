#include<iostream>
using namespace std;
int main()
{ float p,c,b,m,perc;
  cout<<"enter the marks obtained in physics , chemistry  , maths, biology each out of 100 respectively. "<<endl;
  cin >> p;
  cin>>c;
  cin>>b;
  cin>>m;
  perc=(p+c+b+m)*100/400;
  cout <<"percentage obtained: "<<perc<<"%";
  if (perc>=70){ 
		if (perc>=90)
                     cout<<"grade A";
                else if (perc>=80 && perc<=90)
                     cout <<"grade B";
                else 
                     cout <<"grade C";
		}
  else if (perc>=40){
                 if (perc >= 60 && perc <=70)    
                    cout<<"grade D" ;
                 else if (perc<=60)
                    cout<<"grade E";
                    }
  else {cout <<"grade F";
        }
  return 0;
} 









