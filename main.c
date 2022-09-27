#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	printf("input two integers : ");
	scanf("%i%i", &i, &j);
	
	printf("+ result is %d\n", i+j);
	printf("- result is %d\n", i-j);
	printf("* result is %d\n", i*j);
	printf("/ result is %d\n", i/j);
	printf("%% result is %d\n", i%j);

	return 0;
}
