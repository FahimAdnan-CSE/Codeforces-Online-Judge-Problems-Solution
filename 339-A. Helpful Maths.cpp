#include <bits/stdc++.h>


using namespace std;






int main()
{
    string s;
    int i,count1=0;
    int count2=0;
    cin>>s;
    int ln=s.length();
    int ar[ln];
    char ch[200];
    for(i=0;i<ln;i=i+2)
    {

        ar[count1]=s[i]-'0';
        count1++;
    }

    sort(ar,ar+count1);
    for(i=1;i<=ln;i=i+2)
    {

        ch[count2]=s[i];
        count2++;
    }
    //cout<<count1<<endl;
   int c=count1-1;
   //int f=count1-1
    for(i=0;i<count1;i++)
    {



        cout<<ar[i];



        if(i==c)
        {
             break;

        }
         cout<<ch[i];


    }





}
