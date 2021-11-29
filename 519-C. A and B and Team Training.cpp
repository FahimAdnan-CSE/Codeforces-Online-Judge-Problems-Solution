#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n,m;
    cin>>n>>m;

    long long  c=0;

   if(n<=m)
   {
       if(m/2<=n)
   {
        c=(n+m)/3;
    cout<<c<<endl;

   }
   else
   {
       cout<<n<<endl;
   }

   }
   else if(n>m)

   {

       if(n/2<=m)
   {
        c=(n+m)/3;
    cout<<c<<endl;

   }
   else
   {
       cout<<m<<endl;
   }


   }






}
