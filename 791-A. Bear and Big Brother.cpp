#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b;

    cin>>a>>b;

    int sum=0;
    int sum2=0;
    int i,c=0;
    for(;;)
    {
        sum=(a*3);
        a=sum;
        sum2=(b*2);
        b=sum2;
        c++;
        if(sum>sum2)
        {
            break;

        }

    }
    cout<<c<<endl;


}
