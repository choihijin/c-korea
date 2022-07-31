#include <stdio.h>

void main7() {
	//for (int i = 1; i <= 9; i++)
	//{
	//	printf("2 x %d = %d\n", i, 2 * i);
	//}
	int step = 0;
	printf("몇단을 출력할까요");
	scanf("%d", &step);
	
	for (int i = 0; i <=9 ; i++)
	{
		printf("%d X %d=  %d\n",step, i, step * i);
	}

}