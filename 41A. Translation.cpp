#include <bits/stdc++.h>

using namespace std;

int main()
{


   string s;
   string t;
   cin>>s>>t;
   int flag=0;
   int i;
   int ln=t.length();
   ln=ln-1;
   for(i=0;i<s.length();i++)
   {

       if(s[i]==t[ln])
       {
          flag=1;
          //cout<<s[i]<<"="<<t[ln];
       }
       else
       {
           flag=0;
           break;
       }

       ln--;

   }
   if(flag==0)
   {
       cout<<"NO"<<endl;
   }
   if(flag==1)
   {
       cout<<"YES"<<endl;
   }




}
