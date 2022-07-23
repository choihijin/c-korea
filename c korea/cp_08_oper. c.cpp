#include <stdio.h>

void main8() {
	int result1 = 3 - 5;
	int result2 = 1 + 2;
	int result3 = 2 - 1;
	int result4 = 3 * 3;
	int result5 = 10 /2;
	float result6 = 10.0 / 3.0;
	
	
	
	printf("3-5=%d\n", result1);
	printf("1+2=%d\n", result2);
	printf("2-1=%d\n", result3);
	printf("3*3=%d\n", result4);
	printf("10/2=%d\n", result5);
	printf("10.0/3.0=% .2f\n",result6);
	// % 나머지 구하기 
	int result9 = 10 % 3;
	printf("10을 나머지 구하는식%d\n",result9);// 나머지 구하는 것을  배수 을 구할때 홀짝 구분할때 쓰인다 
	printf("3의배수가0이며%d\n");
	int num = 3;
	printf("num의 홀수면 1,짝수면 0 %d\n", num %2);





}