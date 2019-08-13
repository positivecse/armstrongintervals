#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,result=0,i,temp1,temp2,n=0,r;
clrscr();
printf("Enter any two numbers(interval):");
scanf("%d%d",&n1,&n2);
printf("Armstrong  numbers between %d and %d are:",n1,n2);
for(i=n1+1;i<n2;++i)
{
temp2=i;temp1=i;
while(temp1!=0)
{temp1=temp1/10;++n;}
while(temp2!=0)
{r=temp2%10;
result=result+pow(r,n);
temp2=temp2/10;
}
temp2=i;
temp1=i;
if(result==i)
{printf("\t%d",i);}
n=0;
result=0; }
getch();
}
