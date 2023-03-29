#include<stdio.h>

main()
{
	char a[20],count[20];
	int i,j,k;
	printf("Ener the string : ");
	gets(a);
	k=strlen(a);
	for (i=0;i<k;i++)
	{
		count[i]=0;
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<1;j++)
		{
			if(a[i]==a[j])
			{
				count[i]++;
			}
		}
	} 
	for(i=0;i<k;i++)
	{
		printf("%c : %d\n",a[i],count[i]+1);
	}
}
