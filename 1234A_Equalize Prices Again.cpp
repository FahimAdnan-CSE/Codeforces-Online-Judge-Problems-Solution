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

  int q;
cin>>q;
  while(q--)
  {  cin>>n;
      int sum=0;
      for(num=0;num<n;num++)
      {
           cin>>i;
          sum=sum+i;
      }
      if(sum%n==0)
      {
          printf("%d\n",sum/n);
      }
      else
      {
          printf("%d\n",(sum/n)+1);
      }

  }



 return 0;
}




