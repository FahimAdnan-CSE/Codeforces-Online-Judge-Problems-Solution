#include <bits/stdc++.h>

using namespace std;

int main()
{

   string s;
   cin>>s;


   int t=s.length();
   int count1=0;
   int count2=0;
   int flag=0;
   int flag1=0;


   for(int i=0;i<t;i++)
   {
       if(s[i]>='A'&&s[i]<='Z')
       {
           count1++;

       }
       if(s[i+1]>='A'&&s[i+1]<='Z'&&s[0]>='a'&&s[0]<='z')
       {
           count2++;
       }
       /*if(s[i]>='a'&&s[i]<='z')
       {
           flag1=1;
       }
       */


   }



   if (count1==t)
   {
      transform(s.begin(), s.end(), s.begin(), ::tolower);
       //s[0]=s[0]-32;
       cout<<s<<endl;
   }
   else if((t==1)&&(s[0]>='a'&&s[0]<='z'))
   {
       transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;

   }
  else if(count2==t-1)
   {
       transform(s.begin(), s.end(), s.begin(), ::tolower);
       s[0]=s[0]-32;
       cout<<s<<endl;
   }

   else
   {
       cout<<s<<endl;
   }




/*
   if(s[0]>='a'&&s[0]<='z')
   {
       transform(s.begin(), s.end(), s.begin(), ::tolower);
       s[0]=s[0]-32;
   }
   else if(s[1]>='A'&&s[1]<='Z')
   {
       transform(s.begin(), s.end(), s.begin(), ::toupper());
      // s[0]=s[0]-32;
   }
   cout<<s<<endl;

*/

}

