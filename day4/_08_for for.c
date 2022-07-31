#include<stdio.h>

void main8() {

	//반복문 안에 반복문 사용가능 
	//조건문 안에 조건문 사용가능
	//조건문 안에 반복문 사용 가능 
	//반복문 안에 조건문 사용가능 

	//반복문 안에서 조건문 사용

	//for (int i = 0; i < 3; i++)
	//{
	//	if (i == 0) {
	//		printf("시작!\n");
	//	}
	//	printf("%d \n", i);
	//}

	//중첩 반복문: 반복문 안에 반복문 사용
	//그래픽 작업을 할수ㅇ있다 
	for (int i = 0; i < 3; i++)
	{
		printf("시작\n", i);

		for (int a = 0; a < 3; a++); {
			//printf("%d \n", a);
		}
		printf("끝%d\n", i);
	}





}