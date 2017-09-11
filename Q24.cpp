#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char ch = 'a';

    cout<<"Alphabets from a - z are: "<<endl;
    while(ch<='z')
    {
        cout<<ch;
        ch++;
    }

    return 0;
}
