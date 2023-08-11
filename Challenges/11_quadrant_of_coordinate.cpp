#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;

    cout<<"Enter X and Y coordinates : ";

    cin>>x>>y;


    if(x>0 && y>0)
    {
        cout<<"First Quadrant ";
    }
    else if(x>0 && y<0)
    {
        cout<<"Second Quadrant ";
    }
    else if(x<0 && y<0)
    {
        cout<<"Third Quadrant ";
    }
    else if(x<0 && y>0)
    {
        cout<<"Fourth Quadrant ";
    }
    else if(x==0 || y==0)
    {
        cout<<"Axis ";
    }
    else
    {
        cout<<"Origin ";
    }

    return 0;
}