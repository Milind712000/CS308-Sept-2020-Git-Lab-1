/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
to run 
gcc sqrt.c -lm
./a.out
*/
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	
	int value;
	int n;
	char ch;

	n = sscanf(argv[1], "%d%c", &value, &ch);

	if (n != 1) {
		/* sscanf didn't find a number to convert, so it wasn't a number */
		printf("invalid argument. argument should be a number\n");
		exit(-1);
	}
	else {
	/* It was */
	}

	if(value < 0){
		value *= -1;
		printf("NEGSUPPORT: The number is negative\n");
		printf("NEGSUPPORT: Sqrt of %d is %fi\n",value,sqrt(value));
	}else{
		printf("NEGSUPPORT: Sqrt of %d is %f\n",value,sqrt(value));
	}

	printf("End of program. Exiting.\n");
	return(0);

} // end main
