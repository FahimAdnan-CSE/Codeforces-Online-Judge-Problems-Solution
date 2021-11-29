#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n ,k,i;

    cin>>n>>k;

 int ar[n];
 int sum=0;

    for(i=0;i<n;i++)
    {

        cin>>ar[i];
        sum=sum+ar[i];


    }
     int count1=0;
    if(sum<=0)
        {
            cout<<count1<<endl;
        }
   else
   {
       for(i=0;i<n;i++)
    {

        if(ar[k-1]<=ar[i]&&ar[i]!=0)
        {
            count1++;
        }

    }
    cout<<count1<<endl;
   }







}
