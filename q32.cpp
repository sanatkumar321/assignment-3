#include <iostream>
using namespace std;

int main() {
int a,x;
cout << "Enter number : ";
cin >> a;
x=a;
while(x>10)
{
    x =x / 10;
}
cout << "First digit = " << x<< "Last digit = " << a%10;
return 0;
}
