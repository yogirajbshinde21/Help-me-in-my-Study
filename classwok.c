#include<stdio.h>

int sum(void);
int main()
{
    int s;
    s=sum();
    printf("sum=%d",sum);

}

    int sum()
    {
    int a,b,sum=0;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    sum=a+b;
return(sum);
}
