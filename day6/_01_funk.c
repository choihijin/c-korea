#include<stdio.h>

//�Լ�
// �ڷ��� �Լ���(){}
//()�Է¹�����
//{}����
//�Լ��� :�Լ���
//�ڷ���: ���ϰ� ���� 


void func1() {

	printf("�Լ������\n");
	//void ���ϰ� ���� 
	//()����ִ°� ���� 

}
void func2(int num) {
	printf("%d\n",num);
	//void ���ϰ� ���� 
	//() int ��� ���� �ϳ� ������ ����Ҷ� ������ �ϳ��� �־��־�� �� 


}

void func3(char c) {
	printf("%c\n",c);
}

void func4(int num1,int num2) {
	printf("%d\n",num1+num2);
}

int funck5(int num1, int num2) {
	int result = num1 + num2;
	return result;

	//(): �޴°� 
	//return : �ִ°�

}

char func6(int num) {
	if (num >= 0) {
		return 'y';
	}
	else
	{
		return 'n';
	}

}

int main1() {

	func1();
	func2(321);// int ��� ���������Ѱ��� ���־ �� 
	func3('a');
	func4(2, 4);
	
	
	//:�Լ��� ���� ���� 
	// return  �Լ��ε� ���� ���޹���
	// func6 ����̸� y �����̸� n
	int number=funck5(5,10); //cnffur x, return ���� ������� �˷���
	printf("%d\n", 5 + 10);
	printf("%d\n", funck5(5,10));
	
	
	printf("%c\n", func6(10));
	printf("%c\n", func6(1));
	printf("%c\n", func6(-10));
	//����Ҷ� �Ѱ��ִ� ���� ()��, ����Ŀ� �Ѱܹ��� ���� return �� �����ش� 
	char a = '\0';
	a = func6(-5);
	a = 'n';
	number = 5 + 10;      // 15�� ���� 
	number = funck5(5,10);//15 �� ����

	return 0;
}