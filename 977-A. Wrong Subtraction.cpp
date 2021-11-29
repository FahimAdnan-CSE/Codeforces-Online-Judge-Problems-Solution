#include <bits/stdc++.h>

using namespace std;


int main()
{
    int i,n,k;
    cin>>n>>k;

    for(i=1;i<=k;i++)
    {

        int c= n%10;

        if(c==0)
        {

            n=n/10;
        }
        else if(c!=0)
        {
            n=n-1;
        }


    }
    cout<<n<<endl;


}
