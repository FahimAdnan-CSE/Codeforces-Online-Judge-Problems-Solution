#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());
    string new1;
    int count1=0;
    int i;

    for(i=0;i<s1.length();i++)
    {

        new1.push_back(s1[i]);
        count1++;

    }
    for(i=0;i<s2.length();i++)
    {
          count1++;
       // new1[count1]=s2[i];
       new1.push_back(s2[i]);


    }
     sort(new1.begin(), new1.end());
    if(new1==s3)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }





}
