#include<stdio.h>
void main()
{
	int i,j,k,l,temp,temp2;
	char a[20];
	char b[20];
	printf("enter string 1..\n");
	scanf("%s",a);
	printf("enter string 2..\n");
	scanf("%s",b);
	for(i=0;a[i];i++)
	{
		if(a[i]>=65 ^ a[i]<=122)
		{
		  for(j=i;a[j];j++)
		   a[j]=a[j+1];
	 		 i--;
		}	
	}j=0;
	for(i=0;b[i];i++)
	{
		if(b[i]>=65 ^ b[i]<=122)
		{
			for(j=i;b[j];j++)
				b[j]=b[j+1];
			i--;
		}
	}j=0;
	printf("filtred string 1:%s\n",a);
	printf("filtered string 2:%s\n",b);
	for(i=0;a[i];i++)
	{if(a[i]>=97 && a[i]<=122)
		a[i]=a[i]-32;	}
	printf("upper case of str1 :%s\n",a);
	for(i=0;b[i];i++)
	{if (b[i]>=97 && b[i]<=122)
		b[i]=b[i]-32;}
	printf("upper case of str2 :%s\n",b);
	for(k=0;a[k];k++);
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-1-i;j++)
		{	if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;}}}
	printf("sorted string 1:%s\n",a);
	for(l=0;b[l];l++);
	for(i=0;i<l-1;i++)
	{for(j=0;j<l-1-i;j++)
		{if(b[j]>b[j+1])
			{	temp2=b[j];
				b[j]=b[j+1];
				b[j+1]=temp2;}}}
	printf("sorted string 2:%s\n",b);
	for(i=0;a[i];i++)
	{
		if(a[i]!=b[i])
			break;}
	if(a[i]==b[i])
		printf("ANAGRAM...\n");
	else
		printf("NOT A ANAGRAM...\n");}

