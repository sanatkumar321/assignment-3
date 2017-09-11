#include<iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;

    i = 1;
    while ( i <=n )
    {
        sum += i;
        ++i;
    }

    cout<<sum;

    return 0;
}
