# TASK4
 #include<stdio.h>
int main()
{
int n;
int a=n&(n-1);
printf("ENTER THE VALUE OF n");
scanf("%d",&n);
while(a!=0)
{
n=n&(n-1);
}
return n;
}
