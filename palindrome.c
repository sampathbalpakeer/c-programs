#include<stdio.h>
int main()
{
int num,rev=0,temp,d;
printf("enter number\n");
scanf("%d",&num);
temp=num;
while(num)
{
   d=num%10;
    rev=rev*10+d;
    num=num/10;
}
if(temp==rev)
{
  printf("%d is palindrome",temp);
}
else
{
  printf("%d is not a palindrome",temp);
}
return 0;
}