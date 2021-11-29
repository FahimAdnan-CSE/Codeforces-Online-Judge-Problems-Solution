#include <bits/stdc++.h>

using namespace std;


int main()
{

    unsigned int n;

    cin>>n;
    int count1=0;

    for(;;)
    {
        if(n>=100)
        {
          count1=count1+(n/100);
            n=n%100;


        }
        else if(n>=20&&n<100)
        { count1=count1+(n/20);
              n=n%20;

        }
        else if(n>=10&&n<20)
        { count1=count1+(n/10);
              n=n%10;

        }
        else if(n>=5&&n<10)
        { count1=count1+(n/5);
              n=n%5;

        }
        else if(n>=1&&n<5)
        { count1=count1+(n/1);
              n=n%1;

        }
        if(n==0)
        {
            break;
        }




        }
        cout<<count1<<endl;






    }




