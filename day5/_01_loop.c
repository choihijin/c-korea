#include<stdio.h>

void main1() {
	int sum = 0;
	sum += 0;  // 0+0이고대입
	sum += 1;  // 0+1이고대입
	sum += 2; //  1+2이고대입
	sum += 3; //  3+3이고대입
	sum += 4; //  6+4이고 대입
	sum += 5; //  10+5이고 대입




	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", i);
		sum += i;//sum= sum+i 줄인말이다 

	}
	
		printf("총점:%d \n", sum);
		sum = 0;
		sum + 2;
		printf("%d\n", sum);
		sum = sum + 2;  //sum+= 
}