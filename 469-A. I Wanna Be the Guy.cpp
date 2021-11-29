#include <bits/stdc++.h>

using namespace std;


int main()


{


    int n,p,q;
    cin>>n;
    cin>>p;
    int arraycount=0;
    int array1[210];
    for(int i=0;i<p;i++)
    {

         cin>>array1[i];
         arraycount++;

    }
     cin>>q;
    for(int i=0;i<q;i++)
    {

         cin>>array1[ arraycount];
             arraycount++;
    }









    int size1=sizeof(array1)/sizeof(array1[0]);
    //cout<<size<<endl;


    sort(array1,array1+arraycount);

   /* for(int i=0;i<arraycount;i++)
    {

        cout<<array1[i]<<" ";
    }
    */
    int c=0;
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<arraycount;j++)
        {

            if(i==array1[j])
            {
                flag=1;
            }

        }
        if(flag==1)
        {
            c++;
        }




    }
    if(c==n)
    {
        cout<<"I become the guy."<<endl;

    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;

    }



}
