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
	// % ������ ���ϱ� 
	int result9 = 10 % 3;
	printf("10�� ������ ���ϴ½�%d\n",result9);// ������ ���ϴ� ����  ��� �� ���Ҷ� Ȧ¦ �����Ҷ� ���δ� 
	printf("3�ǹ����0�̸�%d\n");
	int num = 3;
	printf("num�� Ȧ���� 1,¦���� 0 %d\n", num %2);





}