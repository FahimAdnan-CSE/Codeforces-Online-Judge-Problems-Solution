#include <bits/stdc++.h>

using namespace std;


int main()
{


    int n,a,b;

    cin>>n;
    int ar[1001],count1=0;
    int sum=0;

    while(n--)

    {

        cin >>a>>b;


        sum=abs(sum-a);

        sum=sum+b;

        ar[count1]=sum;
        count1++;


    }

    int i;

    sort(ar,ar+count1,greater<int>());

   cout<<ar[0]<<endl;



}
