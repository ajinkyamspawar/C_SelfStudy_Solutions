int main()
{
int i,j,sum=0;
int a[3][3]={10,20,1,22,32,2,50,5,3};
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=sum+a[j][i];
}
printf("%d\n",sum);
sum=0;
}
}
