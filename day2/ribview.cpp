#include <stdio.h>

void main0() {
	//����� ȭ���� ���̱� ���Ѱ�
	printf("����\n");

	//������ ���� ���� �����ݷ�: ;
	//�ּ� ://�޸� 
	//���� :(����) ���ϴ� ��
	//���α׷� ���� ���� �� ���� ���� �� ���Ѵ� 
	// ���� �� ���� ����� �ҰͰ��� ���� �����س��� ���Ѱ�
	//�������� ������ ����� �۾�
	
	char �������1 = 'a';// ������� �� ���� 


	printf("%c \n", �������1);
	// ������ Ÿ���� �����ֽ��ϴ� .(�ڷ���)
	//char int float double,...
	//������ ������� �ڷ����� ���� �����ٰ� ������ �̸��� ���� �ݴϴ� 
	int ���ڰ���;      // ����Ÿ���� ���� 

	float �Ҽ����ִ°���;//�Ǽ� Ÿ���� �������
	
	char �ѱ��ڰ���;     // ����Ÿ�� �������

	char ������������[100] = "hello word";//���ڿ� ������� ���� 
	//�� ���� :
	//������ = ��;
	//���� �ʸ��� ��������� ���ÿ� ���� �����Ҽ��ִ� 
   //������� :����ϴ� ���� ���� �̸��� �����ָ� �˴ϴ�
	���ڰ��� = 314;        //�����ִ� ����
	�Ҽ����ִ°��� = 3.14f; //�Ǽ����� �ִ� ����
	�ѱ��ڰ��� = 'a';       // �Ѱ��� �ִ°���    
	printf("���ڴ�   %d \n", ���ڰ���);
	printf("���ڴ�   %c \n", �ѱ��ڰ���);
	printf("���ڿ��� %s \n", ������������);
	printf("�Ǽ����� %f \n", �Ҽ����ִ°���);
	//����� �������� ���� ���
	printf("%d %c %s %f \n",���ڰ���,�ѱ��ڰ���,������������, �Ҽ����ִ°���);
	//���ڳ����� ������ ���� (��� �� ���)
	int sum = ���ڰ��� + �Ҽ����ִ°���;
	printf("%d", sum);

}
