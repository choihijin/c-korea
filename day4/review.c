#include <stdio.h>

void main0() {
	//���ǹ� if else if else switch case break 
	//if(){}
	//switch(){}
	
	int number = 10;
	// == ,<,>,=>,=<  ������ 1 Ʋ���� 0
	if (number ==0) {
		printf("���ڴ� 1�� ����\n");
	}
	else if (number==10) {  ///else if �� if �� Ʋ���� �����Ѵ� 
		printf("���ڴ� 10������\n");
	}
	
	else if (number == 20) {//else if else if ��Ʋ���� �����Ѵ� 

		printf("���ڴ�20������\n");

	}
	
	
	else
	{
		printf("���ڴ� 0�� ����\n");
	}


	switch (number){
	case 0:
		printf("���ڴ�0������\n");
		break;
	case 10:
		printf("���ڴ�10������\n");
		break;
		
	case 20:

		
		printf("���ڴ�20������\n");
		break;
	default:
		printf("��ġ�ϴ¼��ڴ¾���\n");
	}



}