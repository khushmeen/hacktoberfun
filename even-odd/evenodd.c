#include <stdio.h>

int main(void) {
	int a;

	printf("Enter number\n");
	scanf("%d", &a);

	//checks if number is even
	if( a % 2 == 0){
	printf("Number is even\n");
	}

	//checks if number is odd
	else{
	    printf("Number is odd\n");
	}

}
