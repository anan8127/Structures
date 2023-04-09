#include <stdio.h>

struct car
{
	char name[50];
	int mYear;
	int cost;
	char category;
};

struct car model[3];

int main()
{
		
	int userInput();
	int printInput();
	
	return 0;
}





int userInput()
{
	int i;
	
	
	for(i = 0; i < 3; i++)
	{
		printf("Name: ");
		scanf("%s", &model[i].name);
	
		printf("Manufacturing Year: ");
		scanf("%d", &model[i].mYear);
		
		printf("Cost: ");
		scanf("%d", &model[i].cost);		
		
		printf("\n\n\n");
	}
		
}

int printInput()
{
	int j;
	
	printf("Available Database: \n\n");
	printf("Name  MYear  Cost \n");
	
	for(j = 0; j < 3; j++)
	{
		printf("%s  %d  %d \n", model[j].name, model[j].mYear, model[j].cost);
	}
	
}