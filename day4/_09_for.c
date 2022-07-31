#include<stdio.h>
void main() {
	//±¸±¸´Ü 
	
	for (int k = 0; k <= 9; k++)
	{
		printf("============%d=========\t", k);
	}
	printf("\n");
	
	
	
	
	
	for (int i = 0; i <= 9; i++){
		for (int j = 0; j <= 9; j++) {
			printf("%d  X %d=%d\n", j, i, j * i);

		}
		printf("\n");
	}

}