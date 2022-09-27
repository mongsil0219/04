#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	printf("input the second : ");
	scanf("%i", &i);

	printf("The time for %i second is  %i:%i:%i \n", i, i/3600, (i%3600)/60, (i%3600)%60);		
	return 0;
}
