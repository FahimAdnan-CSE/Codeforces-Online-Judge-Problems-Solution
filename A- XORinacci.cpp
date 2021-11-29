/**------------------------------------------------*/
//Problem Setter:
//Problem No    :
//Problem Name  :
//Type          :
//Author        : Fahim Shahriar Adnan
//University    : City University
//E-mail        : fahimadnan5@gmail.com
/**--------------------------------------------**/

                                       /**  Bismillahir Rahmanir Rahim  **/
#include<bits/stdc++.h>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;


int main()
{
  int n,num,i;

  cin>>n;
  while(n--)
  {
      int a,b,n,n1,n2,n3,temp;
      cin>>a>>b>>n;
      temp=n%3;

      if(temp==2)
      {
          printf("%d\n",a^b);
      }
      else if(temp==0)
      {
          printf("%d\n",a);
      }
      else
        printf("%d\n",b);



      /*if(n==0)
      {
          printf("%d\n",a);
      }
     else{
      for(i=0;i<n-1;i++)
      {
          n3=a^b;
          a=b;
          b=n3;

      }
      printf("%d\n",n3);
      n3=0;
     }
     */



  }



 return 0;
}




