#include<stdio.h>
void filter_array(char*);
void upper_case(char*);
void sort(char*,int);
void main()
{
	int s1,k,l,i;
	char a[20];
	char b[20];
	printf("enter string 1..\n");
	scanf("%s",a);
	printf("enter string 2..\n");
	scanf("%s",b);
	filter_array(a);
	filter_array(b);
	upper_case(a);
	upper_case(b);
	for(k=0;a[k];k++);
	sort(a,k);
	for(l=0;b[l];l++);
	sort(b,l);
	for(i=0;a[i];i++)
	{
		if(a[i]!=b[i])
			break;}
	if(a[i]==b[i])
		printf("ANAGRAM...\n");
	else
		printf("NOT A ANAGRAM...\n");
}

	void filter_array(char *p)
	{
		int i,j,k;
	for(i=0;p[i];i++)
	{
		if(p[i]>=65 ^ p[i]<=122)
		{
		  for(j=i;p[j];j++)
		   p[j]=p[j+1];
	 		 i--;
		}	
	}
	printf("filtered:%s\n",p);
	}

	void upper_case(char *p)
{
	int i;
	for(i=0;p[i];i++)
	{if(p[i]>=97 && p[i]<=122)
		p[i]=p[i]-32;	}
	printf("upper case of str :%s\n",p);
}
	void sort(char *p,int k)
{
	int i,j,temp;
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-1-i;j++)
		{	if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;}}}
	printf("sorted string:%s\n",p);
}


