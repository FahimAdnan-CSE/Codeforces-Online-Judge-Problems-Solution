#include <bits/stdc++.h>

using namespace std;


int main()
{


    int n,h;

    cin>>n;
    cin>>h;
      int a;
    int c=0;
    int t=n;
    while(n--)
    {


        cin>>a;

        if(h<a)
        {
            c++;
        }


    }

    cout<<(((t-c)*1)+(c*2))<<endl;



}
