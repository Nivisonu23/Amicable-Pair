#include<stdio.h>
int main()
{
    int n1,n2,i,j,s1=0,s2=0;
    scanf("%d %d",&n1,&n2);
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            s1=s1+i;
        }
    }
    for(j=1;j<n2;j++)
    {
        if(n2%j==0)
        {
            s2=s2+j;
        }
    }
    if(n1==s2 && n2==s1)
        printf("Amicable Pair");
    else
        printf("Not a Amicable Pair");
    return 0;
}
