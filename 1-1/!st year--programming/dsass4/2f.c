#include<stdio.h>
#include<string.h>
main()
{
	int n,score,i,j,k;
	scanf("%d",&n);
	char ch;
	char s[50];
	int count=0;
	char d[n][50];
	int b[n];
	for(i=0;i<n;i++)
	{
		scanf(" %c",&ch);
		if(ch=='I')
		{
			int fly=0;
			scanf("%s %d",s,&score);
			for(j=0;j<count;j++)
			{
				if((strcmp(s,d[j]))==0)
				{
					fly=1;
					break;
				}
				else
				{
					fly=0;
				}

			}
			if(fly==0)
			{
				printf("1\n");
				strcpy(d[count],s);
				b[count]=score;

				count++;
			}
			else
				printf("0\n");

		}
		else if(ch=='D')
		{
			scanf("%s",s);
			int go=0;
			for(j=0;j<count;j++)
			{
				if(strcmp(s,d[j])==0)
				{
					printf("1\n");
					go=1;
					strcpy(d[j],d[count-1]);
					b[j]=b[count-1];
					count--;
					break;
				}
			}
			if(go==0)
				printf("0\n");
		}
		else if(ch=='M')
		{
			if(count==0)
				printf("NONE\n");
			else
			{
				int max=-100000;
				int k;
				for(j=0;j<count;j++)
				{
					if(b[j]>max)
					{
						max=b[j];
						k=j;
					}
				}
				printf("%s\n",d[k]);
			}
		}
		else if(ch=='S')
		{
			int flag=0;
			scanf("%s",s);
			for(j=0;j<count;j++)
			{
				if(strcmp(s,d[j])==0)
				{
					printf("1\n");
					flag=1;
					break;
				}
			}
			if(flag==0)
				printf("0\n");
		}
	}
}




