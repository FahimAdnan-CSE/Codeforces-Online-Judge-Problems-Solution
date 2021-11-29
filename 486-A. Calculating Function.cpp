#include <bits/stdc++.h>

using namespace std;


int main()
{


    unsigned long long n;
     long long f;

    cin>>n;


     if(n%2==0)
     {
         f= (n/2);
     }
      if(n%2==1)
     {
         f= -((n+1)/2);
     }

     cout<<f<<endl;

}
