#include <stdio.h>

int main(){
	printf("1: addition\n");
	printf("2: subtraction\n");
	printf("3: multiplication\n");
	printf("4: division\n");
	
	int selection;
	scanf("%d",&selection);

	switch(selection){
		case 1:
			printf("Addition selected\n");
			int a0;
			printf("enter first number ");
			scanf("%d",&a0);
			int a1;
			scanf("%d",&a1);
			int AS = a0 + a1;
			printf("%d",AS);
			break;
		case 2: 
			printf("subtraction selected\n");
			break;
		case 3:
			printf("multiplication selected\n");
			break;
		case 4:
			printf("division selected\n");
			break;
		default:
			printf("Invalid selection\n");
			break;
	}
	return 0;
}
