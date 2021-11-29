#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned int ar[4];

    for(int i=0;i<4;i++)
    {

        cin>>ar[i];

    }

    int count1=0;
    for(int i=0;i<4;i++)
    {

        for(int j=i+1;j<4;j++)
        {
            if(ar[i]==ar[j])
            {
                count1++;
                 //printf("ar[i%d=%d]==ar[j%d=%d]",i,ar[i],j,ar[j]);
                // cout<<endl;
                break;

              //  cout<<ar[i]<<"=="<<ar[j];

            }


        }
          //cout<<endl;

    }


  cout<<count1<<endl;

}
