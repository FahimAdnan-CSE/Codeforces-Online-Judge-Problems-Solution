/**Bismillahir Rahmanir Rahim.**/

#include <stdio.h>

int main()
{
    int i ,num,a,b,c,sum1=0,sum2=0,sum=0;

    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        sum=sum+a;
        sum1=sum1+b;
        sum2=sum2+c;

}


    if(sum==0&&sum1==0&&sum2==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

}

