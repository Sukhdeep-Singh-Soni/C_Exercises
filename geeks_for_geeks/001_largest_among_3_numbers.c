/*
 *This program is to find the largest among threee numbers
 * */

#include <stdio.h>

int main(void) {
	int num1, num2, num3;

	printf("Enter three numebers : ");
	scanf("%d %d %d",&num1, &num2, &num3);

	/*condition for num1 to be greatest*/
	if((num1 > num2) && (num1 > num3)) {
		printf("%d is greatest\n",num1);
	}
       
	/*condition for num2 to be greatest*/
	else if((num2 > num1) && (num2 > num3)) {
		printf("%d is greatest\n",num2);
	} 
	
	/*condition for num3 to be greatest*/
	else if((num3 > num1) && (num3 > num2)) {
		printf("%d is greatest\n",num3);
	}
	return 0;
}

