#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter character : ";

    cin>>ch;

    // a = 97 to z = 122 && A = 65 to Z = 90
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        cout<<(int)ch;
    }
    else
    {
        cout<<"Invalid";
    }

    return 0;
}
