#include<stdio.h>
main()
{
	int n,i=0,t,k,j;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&t);
	k=0;
	j=1;
	while(j<=t)
	{
		if(t%j==0)
		{
			k=k+1;
		}
		else
		{
			k=k;
		}
		j++;
	}
	if(k%2==0)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n");
	}
	i++;
	}
}
