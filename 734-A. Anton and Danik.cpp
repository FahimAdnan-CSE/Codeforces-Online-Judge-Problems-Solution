#include <bits/stdc++.h>

using namespace std;


int main()

{




    int count1=0;int count2=0;
    int i;
    int n;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++)
    {

        cin>>s[i];

         if(s[i]=='A')
         {
             count1++;

         }
         if(s[i]=='D')
         {
             count2++;
         }

    }

    if(count1>count2)
    {


        cout<<"Anton"<<endl;
    }
     else if(count1<count2)
    {


        cout<<"Danik"<<endl;
    }
    else

    {
        cout<<"Friendship"<<endl;
    }






}
