#include<stdio.h>
#define SUBWAY_LENGTH 4

int main2() {

	int subway[4] = { 0,0,0,0 };  //��ǻ���� 0������ ����

	//1�� ĭ�� 3��  
	subway[0] = 3;
	
	//2�� ĭ�� 2�� 

	subway[1] = 2;


	//3�� ĭ�� 1��  
	subway[2] = 1;

	//4�� ĭ�� 2�� 
	
	subway[3] = 2;
	
	//3��ĭ �� 3������ �߰��� ž��
	int subway3 = 1;
	
		
		subway[2] += 3;  //subway{3,2,4,2}
	
		int sum = 0;
	//�� ĭ�� �ο��� ��ü �ο��� ���
		for (int i = 0; i < SUBWAY_LENGTH; i++)  // 4ȸ������ �ݺ��� �Ѵ� 
		{
			printf("%d ��ĭ����%d��\n", i+1, subway[i]);
			sum += subway[i];
		
		}
		printf("���ο��� %d��", sum);
	
	return 0;
}