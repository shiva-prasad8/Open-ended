#include<stdio.h>
struct cricketer
{
	int runs, wickets;
	char name[25];
}player[100];
void main()
{
	int i,n;
	printf("Enter the number of cricket players: ");
	scanf("%d",&n);
	printf("Enter player name: \n");
	for(i=0;i<n;i++)
	{
		scanf("%s",player[i].name);
	}
	printf("Enter runs scored: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&player[i].runs);
	}
	printf("Enter wickets taken: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&player[i].wickets);
	}
	printf("NAME\t\t\tRUNS\tWICKETS\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%d\t\t%d\n",player[i].name,player[i].runs,player[i].wickets);
	}
}
