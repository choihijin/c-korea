#include<stdio.h>

void main1() {
	int sum = 0;
	sum += 0;  // 0+0�̰����
	sum += 1;  // 0+1�̰����
	sum += 2; //  1+2�̰����
	sum += 3; //  3+3�̰����
	sum += 4; //  6+4�̰� ����
	sum += 5; //  10+5�̰� ����




	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", i);
		sum += i;//sum= sum+i ���θ��̴� 

	}
	
		printf("����:%d \n", sum);
		sum = 0;
		sum + 2;
		printf("%d\n", sum);
		sum = sum + 2;  //sum+= 
}