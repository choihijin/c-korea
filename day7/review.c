#include<stdio.h>
#include"review.h"

//�ڷ��� �Լ� (���޹�����){�Լ��� ���Ǹ� �����ϴ��ڵ�}

int main0() {

	int sum = add(30, 50);
	printf(" %d\n", sum);
	float divisition = div(30.0f, 50.0f);
	printf(" %f\n", divisition);





	return 0;



}








int add(int n1, int n2) {
	int result = n1 + n2;

	return result;

}
//����� �� ���� ����� ���
float Div(float n1, float n2) {

	float result = n1 / n2;
	return result;
}




