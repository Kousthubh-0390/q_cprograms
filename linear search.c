#include<stdio.h>
int search(int n,int size,int a[size])
{
	int i,m=0;
	for(i=0;i<size;i++)
	{
      if(a[i]==n)
	  {
      	printf("%d is found in location %d\n",n,i+1);
      	m++;
	  }
	}
	  if(m=0)
	  {
	  	printf("%d is not found",n);
	  }
}
int main()
{
int size,i,v;
printf("enter the no of elements :");
scanf("%d",&size);
int a[size];
printf("enter elements :\n");
for(i=0;i<size;i++)
{
	scanf("%d",&a[i]);
}
printf("enter element to search :");
scanf("%d",&v);
search(v,size,a);
}

