#include <stdio.h>

void main3() {
	//����ī�� �� ����ϴ� 
	//���̸� �Է� �޾Ƽ� 
	//14�� �̸��̸� ��Դϴ� . ����� 500 �Դϴ� 
	//14��~19�� �̸�    ����� 750�� �Դϴ� 
	//20�� �̸� :�����Դϴ�. ����� 1000���Դϴ�  
	int age = 0;
	int price = 0;
	char bus = 0;
	char a[100]  = "�  500���Դϴ�";
	char b[100]  = "û�ҳ�750�� �Դϴ�";
	char c[100]  = "�  1000�� �Դϴ�";

	printf("����ī�� ����ּ���>>");
	scanf("%d",&age);
	
	if (age > 10) {
		
		price = 500;
		
		printf("%s\n", a);
		printf("��Դϴ�.�����%d�� �Դϴ� ",price);
	}
else if (age < 10) {
		price = 750;
		printf("%s", b);
		printf("û�ҳ��Դϴ� ����� %d", price);
	   
	}
else if (age < 20) {
		price = 1000;
		printf("%s", c);
		printf("��Դϴ� ����� %d", price);
	
	}







}