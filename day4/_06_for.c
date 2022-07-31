#include<stdio.h>

void main6() {
	//for 사용해서 1-10 까지 출력 
	//1_ 에서 합
	int 합계 = 0;
	
	for (int i = 0; i < 10; i++) {

	
		합계 += (i + 1);
		printf("%d\n", i);
	}
    printf("%d\n", 합계);
	//값을 입력박고 합계을 구하세요
	int b = 0;
	int sum = 0;
	printf("몇가지 다더할까요 ");
	scanf("%d", &b);
	
	for (int a = 1; a <= b; a++)
	{
		
		sum += (a+1);
		printf("%d\n",a);
	


	}
	printf("%d\n", sum);
}