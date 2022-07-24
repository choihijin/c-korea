#include <stdio.h>

void main3() {
	int num1 = 0, num2 = 3;
	char name[50];
	//학습지 사칙연사 
	
	printf("이름을 입력하세요:");
	scanf("%s",& name);
	printf("===================================\n");
	printf("1+1=");
	scanf("%d", &num1);
	//2-1
	printf("2-1= ");
	scanf("%d", &num1);
	//3*3
	printf("3*3= ",num1);
	scanf("%d", &num1);
	// 10/2
	printf("10/2= ");
	scanf("%d", &num1);

	printf("내이름은:%s\n",name); // 이름결과 출력 
	printf("1+1=2  \n");  //결과 답안지 
	printf("2-1=1  \n");  //결과 답안지 
	printf("3*3=9  \n");  //결과 답안지 
 	printf("10/2=5 \n");  //결과 답안지

	// + - * /
	// 대입 =
	// 나머지 구하기 %

	

}