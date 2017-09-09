#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout << "enter the three sides of triangle :"<<endl;
  cin >>a;
  cin >>b;
  cin >>c;
  if (a>(b+c)|| b>(c+a)|| c>(b+a)){cout << "not a triangle.";
				   }
  else if (a==b)
	{if (a==c){
            cout <<"equilateral triangle";
		}
	 else {
	  cout <<"isosceles triangle ";
	      }
        }	
		
  else {cout << "scalene";}
 return 0;

}  
