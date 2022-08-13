#include<stdio.h>

int main3() 
{
	int 가격[5] = { 100,200,300,400,500 };
	//for 문 으로 전부 출력 

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", 가격[i]);
	
		sum += 가격[i];
	}
	printf("총가격은%d\n", sum);
	printf("%d\n", 가격[1]);




	return 0;
}