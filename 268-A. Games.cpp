#include <bits/stdc++.h>

using namespace std;


int main()
{
   int t;

    cin>>t;
    int host[101],guest[101];
    int c1=0,c2=0;

    for(int i=0;i<t;i++)
    {
        cin>>host[i]>>guest[i];

    }
    for(int i=0;i<t;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            if(host[i]==guest[j])
            {
                c1++;
            }
            if(guest[i]==host[j])
            {
                c2++;
            }

        }

    }
    cout<<c1+c2<<endl;






}
