#pragma warning(disable:4996)    
#include <stdio.h> 

int main(void)
{
	char UserInput[10];
	
	// Input Engineers for the nine character string
	printf("Enter a string of nine characters or less: ");
	scanf("%s", UserInput);

	// Output 0
	printf("\n\nCharacter 0 is: %c \n\n", UserInput[0]);
	
	// Output 4
	printf("Character 4 is: %c \n\n", UserInput[4]);
	
	// Output 8
	printf("Character 8 is: %c \n\n", UserInput[8]);
		
	return 0;

}
