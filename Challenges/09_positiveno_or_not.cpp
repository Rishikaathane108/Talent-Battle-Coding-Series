#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter No : ";

    cin>>n;

    if(n>0)
    {
        cout<<"Positive ";
    }
    else if(n==0)
    {
        cout<<"Neither positive nor negative ";
    }
    else
    {
        cout<<"Negative ";
    }

    return 0;
}
