#include <stdio.h>

void main5() {
	//���� ���
	//���� 90���̻��̸� a, 80�� �̻��̸� b 70 ���̻��̸� c 70�� �̸� �̸� d

	char  grade;
	int score;
	//������ �Է¹ް� 
	//������ ���� ��� �� �˷��ּ���

	printf("������ �Է��ϼ���>>");
		scanf("%d",&score);

		if (90 >= score) {
			grade = 'a';
			printf("%c��,%d���", grade, score);
		}
	else if(80 >= score) {
			grade = 'b';
			printf("%c���,%d", grade, score);

	}
	
	else if (70 > score) {
			grade = 'c';
			printf("%d��,%c���", grade, score);
		}


	else if (70<=score){
			grade = 'd';
			printf("%d��,%c���", grade, score);

		
		}
	
	
		


	 

}