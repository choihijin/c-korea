#include <stdio.h>


void main() {
	//���ǹ� :  if else is~else swicht ~clase breake 

	//if ���� �� ���ϴ��� 
	//switch :��ġ �ϴ��� 
	//���� ���� 
	//1.���� 2.��� 3 ������ 4���� 
	int choice;
	printf("�����ൿ�� �ұ��?");
	scanf("%d", &choice);
	switch (choice) {      //()�ȿ��� �񱳱���
		case 1:
			printf("������ �ߴ�\n");
			break;
		case 2:
			printf("����� �ߴ�\n");
			break;
		case 3:
			printf("������������ߴ�\n");
			break;
		case 4:
			printf("������ �ߴ�\n");
		default:
			
			printf("�߸������߽��ϴ�\n");

	}




}