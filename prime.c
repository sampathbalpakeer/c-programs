#include<stdio.h>
int main()
{
    int num,i,cnt=0;
    printf("enter number\n");
    scanf("%d",&num);
for(i=1;i<=num;i++)
{
    if(num%i==0)
      {
         cnt++;
      }
}
if(cnt==2)
{
 printf("%d is prime number",num);
}
else
{ 
printf("%d is not a prime number",num);
}
return 0;
}