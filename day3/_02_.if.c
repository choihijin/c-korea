#include <stdio.h>

void main2() {
	int age = 0;
	printf("���̸� �Է��ϼ���>>");
	scanf("%d", &age); // ���� �Է¹���
	//if1 
	if (age < 10) {
		printf("��Դϴ�\n");
	}

	else if (age <20) {
		//10���Դϴ�
		//else Ʋ������ �״����� �˻��� if ������ ���� Ʋ���� �������� �帣�� ���� 
		
		printf("10���Դϴ� ");

	}

	else if (age <30)  {
		//20���Դϴ�

		printf("20���Դϴ� ");
  }

	else if (age >30) {
		//30 ���Դϴ� 
		printf("30���Դϴ�");

	
	}
}