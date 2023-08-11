#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a;

    cout<<"Enter Character : ";
    cin>>a;

    if(('a'>=97 && 'a'<=122) || ('a'>=65 && 'a'<=90) )
    {
        cout<<endl<<"Alphabet";
    }
    else
    {
        cout<<endl<<"Not alphabet";
    }

    return 0;
}