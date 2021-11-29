#include <bits/stdc++.h>
using namespace std;

int  main()
{

    int cfb,indoll,wanbuy,i;
     cin>>cfb>>indoll>>wanbuy;
    int sum=0;

    for(i=1;i<=wanbuy;i++)
    {

        sum=sum+(i*cfb);
    }
    if(sum<indoll)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<(sum-indoll)<<endl;
    }



}
