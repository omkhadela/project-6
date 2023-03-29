#include<stdio.h>
#include<string.h>

main()

{
	
	int i,j,o,M,count=0;
	
	printf("Enter the size of array : "); 
	scanf("%d",&o);
	printf("Enter the length of string : ");
    scanf("%d",&M);
	
	char a[o][M];
	
	for(i=0;i<o;i++)
	{
		printf("Enter a string : \n");
		for(j=0;j<M;j++)
		{
		scanf(" %c",&a[i][j]);
		}
	}
	for(i=0;i<o;i++)
	{
		for(j=0;j<M;j++)
		{
		printf("%c",a[i][j]);
		}
		printf("\n");
		count++;
	}
	printf("Number of string is : %d",count);
}
