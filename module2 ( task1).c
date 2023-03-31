// TASK 1

// Write a program to make a square and cube of number.

#include<stdio.h>

int main() // main method
{
    int Num, square , cube; // varialble for arithmetic use 

	
	printf("Enter value of the number:");
    scanf("%d", &Num); // use to take the user input 
	
	square = Num * Num; // square of the number 
	printf("The square of %d is %d\n", Num, square);
	
	cube = Num * Num * Num; // cube of the number 
    printf("The cube of %d is %d\n", Num, cube); 
    
	return 0;
}
 
