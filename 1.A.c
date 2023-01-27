#include <stdio.h>
int sum(int n,int nums[])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum =sum+nums[i];
        for(int m=0;m<n;m++)
        printf("%d",nums[m]);
    }
    return sum;
}
    int main()
    {
    int j,x,a[x];
    scanf("%d",&x);
    for(int j=0;j<x;j++)
    printf("%d",a[j]);
       sum(x,a);
       return 0;
    }