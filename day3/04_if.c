#include <stdio.h>
void main4() {
	//������ 
	//�հ� :������ 60�� �̻��̰� �հ�� 200�� �̻� 
	//��÷� :�հ�200���̻� 
	//���հ� :�հ谡 200�̸�

	int ���� = 50, ���� = 100, ���� = 60;
	int �հ� = ���� + ���� + ����;
	char* �հݿ���;
	
	if (�հ� >= 200) {
		sprintf(�հݿ���, "�����");
		if (���� >= 60) {
			if (���� >= 60) {
				if (���� >= 60) {
					�հݿ��� = "�հ�";

				}
			}
		}
	}
	else {
		�հݿ��� = "���հ�";

	}
	printf("%s", �հݿ���);

}