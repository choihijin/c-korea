#include<stdio.h>

void main() {
	int num1 = 0, num2 = 3;
	char name[100];
	//�н��� ��Ģ���� 

	printf("�̸��� �Է��ϼ���:");
	scanf("%s", &name);
	printf("===================================\n");
	printf("1+1=");
	scanf("%d", &num1);
	(2 == num1) ? printf("�����Դϴ�\n") : printf("�����Դϴ�\n");
	//2-1
	printf("2-1= ");
	scanf("%d", &num1);
	(1 == num1) ? printf("�����Դϴ�\n") : printf("�����Դϴ�\n");
	//3*3
	printf("3*3= ", num1);
	scanf("%d", &num1);
	(9 == num1) ? printf("�����Դϴ�\n") : printf("�����Դϴ�\n");
	// 10/2
	printf("10/2= ");
	scanf("%d", &num1);
	(5 == num1) ? printf("�����Դϴ�\n") : printf("�����Դϴ�\n");

	printf("���̸���:%s\n", name); // �̸���� ��� 
	printf("����������\n"); // �̸���� ��� 
	printf("1+1=2  \n");  //��� ����� 
	printf("2-1=1  \n");  //��� ����� 
	printf("3*3=9  \n");  //��� ����� 
	printf("10/2=5 \n");  //��� �����

}