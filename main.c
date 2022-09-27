#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	printf("input the second:");
	scanf("%i", &i);
	
	printf("the time is %d : %d", i/60, i%60);

	return 0;
}
