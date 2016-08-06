#include<stdio.h>
#include<stdlib.h>
int a(const void*d,const void*n)
{
return (*(char*)n)-(*(char*)d);
}
void main()
{
int i,j,n;
char str[2*10];
scanf("%d",&n);
j=n;
while(i<n)
{
i=0;
str[i]='B';
str[j+1]='W';
j++;
}
str[n*2]='\0';
qsort(str,2*n,sizeof(char),a);
printf("%s",str);
}