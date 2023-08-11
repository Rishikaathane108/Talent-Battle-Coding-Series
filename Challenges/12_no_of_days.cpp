#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,y;

    cout<<"Enter month and year : ";

    cin>>m>>y;

    if(((m==2) && (y%400==0)) || ((y%100!=0)&&(y%4==0)))

    {

        cout<<"Number of days is 29";

    }

    else if(m==2)

    {

        cout<<"Number of days is 28";

    }

    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)

    {

        cout<<"Number of days is 31";

    }

    else

    {

        cout<<"Number of days is 30";

    }

    return 0;
}