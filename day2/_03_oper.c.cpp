#include <stdio.h>

void main3() {
	int num1 = 0, num2 = 3;
	char name[50];
	//�н��� ��Ģ���� 
	
	printf("�̸��� �Է��ϼ���:");
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

	printf("���̸���:%s\n",name); // �̸���� ��� 
	printf("1+1=2  \n");  //��� ����� 
	printf("2-1=1  \n");  //��� ����� 
	printf("3*3=9  \n");  //��� ����� 
 	printf("10/2=5 \n");  //��� �����

	// + - * /
	// ���� =
	// ������ ���ϱ� %

	

}