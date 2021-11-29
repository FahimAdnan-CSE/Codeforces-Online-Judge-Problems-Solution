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
  {
      cin>>n;
      if(n==2)
    {
        printf("%d\n",n);
    }
    else{

    int op=n%2;

    if(op%2==0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
    }


  }



 return 0;
}




