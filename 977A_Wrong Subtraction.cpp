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
  long long n,num,i,temp=0;
  cin>>n;
  cin>>num;
  for(i=0;i<num;i++)
  {
      temp=n%10;
      if(temp==0)
      {
          n=n/10;
      }
      else
      {
          n=n-1;
      }

  }

printf("%d\n",n);

 return 0;
}




