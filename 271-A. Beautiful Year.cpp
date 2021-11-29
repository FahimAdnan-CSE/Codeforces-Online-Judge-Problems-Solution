#include <bits/stdc++.h>

using namespace std;

int main()
{


    int y,i;
    cin>>y;
    y=y+1;
    int count1=0;
    for(i=y;i<=10000;i++)
    {

        int a=i%10; //1st digits
        int b=i/10;
        int c=b%10; //
        int d=b/10;
        int e=d%10; //
        int f=d/10;
        int g=f%10; //
        int h=f/10;

        if(a!=c&&a!=e&&a!=g&&c!=e&&c!=g&&e!=g)
        {
            count1=i;
            break;

        }


    }
    cout<<count1<<endl;



}
