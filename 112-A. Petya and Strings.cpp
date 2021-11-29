#include <bits/stdc++.h>


using namespace std;

int main ()
{

    string s1;

    string s2;

    cin>>s1>>s2;

    int n=s1.length();

    int i,j;
    char a[200];
    char b[200];
    char c[200];
    int sum=0;
     int sum2=0;

/*
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());

    if(s1==s2)
    {

    {
        cout<<"0"<<endl;
    }
    }

     else if(s1[n-1]<s2[n-1])
     {
         cout<<"-1"<<endl;

     }
      else if(s1[n-1]>s2[n-1])
     {
         cout<<"1"<<endl;

     }
*/


    for(i=0;i<n;i++)
    {
         if(s1[i]>64&&s1[i]<91)
         {
             s1[i]=s1[i]+32;
         }
         s1.push_back(s1[i]);
        a[i]=s1[i];

        sum=sum+a[i];


    }

     for(i=0;i<n;i++)
    {
        if(s2[i]>64&&s2[i]<91)
         {
             s2[i]=s2[i]+32;
         }
      s2.push_back(s2[i]);
        b[i]=s2[i];
        sum2=sum2+b[i];


    }
    int count1=0;

    if(s1==s2)
    {
        cout<<"0"<<endl;
    }
    else
    {
         for(i=0;i<n;i++)
    {


            if(s1[i]!=s2[i])
            {
                if(s1[i]<s2[i])
                {
                     cout<<"-1"<<endl;
                }

                if(s1[i]>s2[i])
                {
                     cout<<"1"<<endl;
                }

                break;
                //cout<<s2[i]<<endl;
            }



    }


            //count1++;





    }
    /*cout<<s2[count1]<<endl;
    if(s1[count1-1]<s2[count1-1])
    {

    {
        cout<<"-1"<<endl;
    }
    }

    else if(s1[count1-1]>s2[count1-1])

    {
        cout<<"1"<<endl;
    }
*/




}
