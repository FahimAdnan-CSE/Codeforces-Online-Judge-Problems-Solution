#include <bits/stdc++.h>

using namespace std;


int main()
{

    int k,l,m,n,d,i;

    cin>>k>>l>>m>>n>>d;

    int count1=0;
    for(i=1;i<=d;i++)
    {

        if(i%k==0)
        {
           count1++;

        }
        else if (i%l==0)
        {
            count1++;
        }
         else if (i%m==0)
        {
            count1++;
        }
         else if (i%n==0)
        {
            count1++;
        }

        //if(i%k==0||i%l==0||i%m==0)



    }
    cout<<count1<<endl;



}
