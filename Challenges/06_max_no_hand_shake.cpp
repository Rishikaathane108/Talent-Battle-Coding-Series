#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter no of people in room : ";

    cin>>n;

    float ans=n*(n-1)/2;

    cout<<"Total no of handshake : "<<ans;

    return 0;
}
