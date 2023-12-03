#include<stdio.h>
int main()
{
int n,i=0;
char str[20];
printf("enter the nmae of yor partner");
gets(str);
printf("enter the limit");
scanf("%d",&n);
while(i<n){
printf("i love you %s\n",str);
i++;
}
return(0);
}