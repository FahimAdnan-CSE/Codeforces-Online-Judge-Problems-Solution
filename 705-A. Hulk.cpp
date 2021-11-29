#include <bits/stdc++.h>

using  namespace std;

int main()
{

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {

            printf("I hate");

            if(i<n)
            {
                cout<<" that ";
            }
            else
            {
                 printf(" it");
            }
        }
        if(i%2==0)
        {
             printf("I love");
            if(i<n)
            {
                cout<<" that ";
            }
              else
            {
                 printf(" it");
            }
        }




    }

   printf("\n");


}
