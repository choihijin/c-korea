#include<stdio.h>

void main6() {
	//for ����ؼ� 1-10 ���� ��� 
	//1_ ���� ��
	int �հ� = 0;
	
	for (int i = 0; i < 10; i++) {

	
		�հ� += (i + 1);
		printf("%d\n", i);
	}
    printf("%d\n", �հ�);
	//���� �Է¹ڰ� �հ��� ���ϼ���
	int b = 0;
	int sum = 0;
	printf("��� �ٴ��ұ�� ");
	scanf("%d", &b);
	
	for (int a = 1; a <= b; a++)
	{
		
		sum += (a+1);
		printf("%d\n",a);
	


	}
	printf("%d\n", sum);
}