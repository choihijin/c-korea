#include<stdio.h>
void Add(int num) // ���� ����
{
	num += 3;


}
void Add2(int* num) //�ּ��� ����
{
	*num += 3; //num�� �������Ͽ� ���� ����
	//&num �� ����
	//num  �� ��
	//*&num==num

}

int main6() 
{
	//�������� ��ġ�� �̿��ϴ� ����̴� 
	int num1 = 0;
	Add2(&num1);//num1 ���ּ��� �����Ѵ� 
	printf("%d\n", num1);

	//& �ּ��� ��Ƴ��� 
	//*������ (��,�ڷ��� �տ� ���� * �ڷ����� �ǹ�)
	//������ ���� �Ҷ� * ������ ���� ���� 
	int* num2;
	num2 = &num1;
	*num2;
	num1 = 88;
	
	printf("%d\n", num2);




	return 0;
}