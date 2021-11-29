#include <bits/stdc++.h>

using namespace std;


int main()
{

    int i ,n;
    cin>>n;
     int count1=0;
    while(n--)
    {
        int a,b,c;


        cin>>a>>b>>c;

        int temp=(a+b+c);

        if(temp>1)
        {
            count1++;
        }


    }
    cout<<count1<<endl;




}

//https://codeforces.com/problemset/problem/231/A
