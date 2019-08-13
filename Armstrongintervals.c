void main()
{
int n1,n2,i,t,sum,r;
clrscr();
printf("Enter any two numbers(interval):");
scanf("%d%d",&n1,&n2);
printf("Armstrong  numbers between %d and %d are:",n1,n2);
for(i=n1+1;i<n2;++i)
{
t=i;
sum=0;
while(t!=0)
{r=t%10;
sum=sum+r*r*r;
t=t/10;
}
if(i==sum)
{printf("\t%d",i);} }
getch();
}
