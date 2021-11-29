#include <bits/stdc++.h>


using namespace std;

int main()
{
   int i,n;

   cin>>n;

   for (i=0;i<n;i++)
   {
       string s;

       cin>>s;

       int c= s.length();

       if(c<11)
       {
        cout<<s<<endl;
       }
       else
       {
           cout<<s[0]<<c-2<<s[c-1]<<endl;

       }



   }



}

//https://codeforces.com/problemset/problem/71/A

