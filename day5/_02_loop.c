#include<stdio.h>

void main2() {
	//�ݺ��� :whil for 
	//�ݺ����� �����ϴ� ��ɾ�:berak,conitue
	//break :�ݺ��� ������� 
	//conitue :�ݺ����� ó������ ���ư��� ()1ȸ�� ���
	int flag = 0;
	while (1)
	{
		flag++;
		printf("%d\n", flag);
		if (flag==500)// flag �� 500 �϶� break ���� �Ͽ� ��������
		{
			break; // if �� ���� ����  
		}
	}


}