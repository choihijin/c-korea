#include<stdio.h>
void swap1(int num1, int num2) 
{
	int backup = num1;
	num1 = num2;
	num2 = backup;



}
void swap2(int *num1, int *num2)
{
	int backup =*num1;
	*num1 = *num2;
	 
		
}


int main7()
{
	int n1 = 3;
	int n2 = 2;
	
	int* p_num;
		p_num = &n2;
		
		int *n3 = &n1;
	
	printf("�ٲٱ���%d,%d\n", n1, n2);
	//swap1(n1, n2);
	swap2( &n1,&n2);
	printf("�ٲٱ���%d,%d\n", n1,n2);
	
	
	
	return 0;


}

//only sw ������ x (��, �� :���ĳ� ���̽�)
//HW+SW�� �����Ͱ� �ʿ��ϴ� (�߿��� ,LOT:C���)
