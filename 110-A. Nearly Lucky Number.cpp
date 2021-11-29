#include <bits/stdc++.h>

using namespace std;




int main()
{
   //string s;

     unsigned long long n;
   //  printf(" %I64d",n);
//cout<<4%10;
   cin>>n;

      int flag=0;
   for(;;)
     {


           if(n==0)
           {
               break;
           }
           else
           {
               int result=n%10;
               n=n/10;
               if(result==4||result==7)
               {
                   flag++;
               }

                result=n%10;
               n=n/10;
               if(result==4||result==7)
               {
                   flag++;
               }

               result=n%10;
               n=n/10;
               if(result==4||result==7)
               {
                   flag++;
               }

                result=n%10;
               n=n/10;
               if(result==4||result==7)
               {
                   flag++;
               }

               result=n%10;
               n=n/10;
               if(result==4||result==7)
               {
                   flag++;
               }

                result=n%10;
               n=n/10;
               if(result==4||result==7)
               {
                   flag++;
               }

               result=n%10;
               n=n/10;
               if(result==4||result==7)
               {
                   flag++;
               }

                result=n%10;
               n=n/10;
               if(result==4||result==7)
               {
                   flag++;
               }





           }



     }

     if(flag==4||flag==7)
     {
         cout<<"YES"<<endl;

     }
     else
     {
         cout<<"NO"<<endl;
     }









}
