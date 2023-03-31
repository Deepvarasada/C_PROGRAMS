// TASK 2

// Write a program to find the simple Interest & Compound Interest.


#include<stdio.h>
#include<math.h>

int main() // main method
{
	 float p, t, r, si, ci; // varialble for interest  P = principal, R = rate, and t = time ,si = simpale insterest ,ci = compound interest
	 
	 
	 printf("Enter principal amount (p): "); 
	 scanf("%f", &p); // use to take user principal amount of interest
	 
	 
	 printf("Enter time in year (t): ");
	 scanf("%f", &t); // use to take user time of interest
	 
	 
	 printf("Enter rate in percent (r): ");
	 scanf("%f", &r); // use to take user rate of interest
	 
	 si = (p * t * r)/100.0; // formula of simple interest
	 printf("Simple Interest = %f\n", si);
	 
	 ci = p * (pow(1+r/100, t) - 1); // formula of compound interest
	 printf("Compound Interest = %f", ci);
	 
	 
	return 0;
}






