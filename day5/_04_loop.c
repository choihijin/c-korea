#include<stdio.h>

void main4() {

	for (int i = 0; i<100;i++)
	{
		//1~50중 에 짝수만 나오게 하는 프로그램 
		
		
		if ( i == 52) {
			break;
		}
		if (i % 2 == 1||i==0) {
			continue;
	}
		printf("%d\n", i);

	}






}