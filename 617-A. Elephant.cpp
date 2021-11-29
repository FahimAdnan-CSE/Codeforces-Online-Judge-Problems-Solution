#include <bits/stdc++.h>

using namespace std;




int main()
{



    int a,i;

    cin>>a;

     int result=0;

        for(;;)
        {

              if(a==0)
              {
                  break;
              }

              else if(a>=5)
              {
                  result=result+(a/5);
                  a=a%5;
              }
              else if(a>=4&&a<5)
              {
                   result=result+(a/4);
                  a=a%4;
              }
              else if(a>=3&&a<4)
              {
                   result=result+(a/3);
                  a=a%3;
              }
              else if(a>=2&&a<3)
              {
                   result=result+(a/2);
                  a=a%2;
              }
              else
              {
                   result=result+(a/1);
                  a=a%1;
              }




        }

        cout<<result<<endl;


}
