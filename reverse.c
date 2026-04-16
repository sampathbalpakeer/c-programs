#include<stdio.h>
int main()
{
int num,rev=0,temp,d;
printf("enter number\n");
scanf("%d",&num);
temp=num;
while(num>0)
{
   d=num%10;
    rev=rev*10+d;
    num=num/10;
}
printf("Reverse = %d",rev);
return 0;
}