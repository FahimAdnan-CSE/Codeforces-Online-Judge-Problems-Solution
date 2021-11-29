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
  int n,num,i,count1=0,count2=0;

  cin>>n;
  string s;
  cin>>s;
  string zero;
  string one;

  for(i=0;i<n;i++)
  {
      s.push_back(i);
      if(s[i]=='z')
      {
          zero.push_back('0');
          zero.push_back(' ');
          count1++;
      }
      else if(s[i]=='n')
      {
          one.push_back('1');
          one.push_back(' ');
          count2++;
      }

  }
  cout<<one<<zero<<endl;



 return 0;
}



