#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int gift[n];

    for(int i=0;i<n;i++)
    {
        cin>>gift[i];

    }
    for(int i=0;i<n;i++)
    {


        for(int j=0;j<n;j++)
        {
          if((i+1)==n)
          {
               if(gift[j]==(i+1))
        {
            cout<<j+1;
        }
          }
          else
          {
               if(gift[j]==(i+1))
        {
            cout<<j+1<<" ";
            //cout<<j+1<<" c";   here using c for check extra blank space
        }
          }


        }


    }
    cout<<endl;



}
