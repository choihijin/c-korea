#include<stdio.h>

void main3() {
	//break �� �ݺ��� ��� ���� 
	//continue �ݺ��� ó������ 1ȸ�� ��� 
	//for �ʱⰪ ���� ���� {}
	//wihle�� 1�ʱⰪ
	for (int i = 1; i < 11; i++)
	{
		if (i %2==1) {
			continue; //�ݺ��� ó������ ���ư��� 3�� ������ 
		}
		printf("%d \n",i);
	}
	//int flag = 1;
	//while (flag<11)
	//{
	//	printf("%d\n", flag);
	//	flag++;
	//}


}