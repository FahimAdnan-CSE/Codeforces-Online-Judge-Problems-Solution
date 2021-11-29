#include <bits/stdc++.h>

using namespace std;

int main()
{


    string s;

    cin>>s;
    int count1=0;
    int count2=0;


    int i;

     for(i=0;i<s.length();i++)
     {

         if(s[i]>64&&s[i]<91)
         {
             count1++;
         }
        else
        {
            count2++;
        }


     }

     if((count1==count2)||(count1<count2))
     {
         transform(s.begin(),s.end(),s.begin(),::tolower);
         cout<<s<<endl;
     }
     else if(count1>count2)
     {
         transform(s.begin(),s.end(),s.begin(),::toupper);
         cout<<s<<endl;
     }







}
