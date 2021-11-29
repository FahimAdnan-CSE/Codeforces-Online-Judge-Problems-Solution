#include <bits/stdc++.h>

using namespace std;

int main()
{

    string num1;
    string num2;


    cin>>num1;
    cin>>num2;
    // int numar1[101];
    // int numar2[101];

    for(int i=0;i<num1.length();i++)
    {
       int temp1;
       int  temp2;
        temp1=num1[i]-48;
        temp2=num2[i]-48;
        //cout<<numar1[i]<<"="<<numar2[i]<<endl;

        if(temp1==temp2)
        {
            cout<<"0";
        }
        else
        {
           cout<<"1";
        }

    }
    cout<<endl;




}
