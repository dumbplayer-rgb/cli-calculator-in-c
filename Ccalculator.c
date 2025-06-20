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
			printf("enter second number ");
			scanf("%d",&a1);
			int AS = a0 + a1;
			printf("%d",AS);
			break;
		case 2:
			printf("subtraction selected\n");
			int s0;
			printf("enter first number ");
			scanf("%d",&a0);
			int s1;
			printf("enter second number ");
			scanf("%d",&a1);
			int AS1 = a0 - a1;
			printf("%d",AS1);
			break;
		case 3:
			printf("multiplication selected\n");
			int m0;
			printf("enter first number ");
			scanf("%d",&m0);
			int m1;
			printf("enter second number ");
			scanf("%d",&m1);
			int AS2 = m0 - m1;
			printf("%d",AS2);
			break;
		case 4:
			printf("division selected\n");
			int d0;
			printf("enter first number ");
			scanf("%d",&d0);
			int d1;
			printf("enter second number ");
			scanf("%d",&d1);
			int AS3 = m0 - m1;
			printf("%d",AS3);
			break;
		default:
			printf("Invalid selection\n");
			break;
	}
	return 0;
}
