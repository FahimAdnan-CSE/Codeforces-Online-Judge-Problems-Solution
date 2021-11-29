#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin>>n;
    int count1=0;
    while(n--)
    {
       int p,q;

       cin>>p>>q;

       if(abs(p-q)>=2)
       {
           count1++;
       }


    }

    cout<<count1<<endl;


}
