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
   int a;
  while(cin>>a)
  {
      int b,c,d;
      cin>>b>>c>>d;

      if((a+b)==(c+d)||(a+c)==(b+d)||(a+d)==(b+c)||(a+b+c)==d||(b+c+d)==a||(c+d+a)==b||(a+b+d)==c)
      {
          printf("YES\n");
      }
       else
      {
          printf("NO\n");
      }


  }

 return 0;
}
