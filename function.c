#include <stdio.h>

void p(int num); // ����

void fucntion_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate); // total - ate = rest
int add(int num1, int num2);



int main_fucntion(void)
{
	////function 
	//// ����
	//
	//int num = 2;
	//p(num);
	//	
	//num = num + 3;
	//p(num);
	//
	//num *= 2;
	//p(num);
	//
	//return 0;

	// �Լ� ����
	
	// ��ȯ���� ���� �Լ�
	//fucntion_without_return();

	//��ȯ���� �ִ� �Լ�
	/*int ret = function_with_return();
	p(ret);*/

	// �Ķ���� (���ް�)�� ���� �Լ�
	/*function_without_params();*/

	// �Ķ���Ͱ� �ִ� �Լ�
	//function_with_params(1, 2, 3);
	
	// �Ķ���͵� �ް� ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); // 5���� ����� 2���� �Ҹ�
	//printf("��� 5���߿� 2���� ������? %d���� ���ƿ�\n", ret);
	//printf("��� %d���߿� %d���� ������? %d���� ���ƿ�\n", 10, 4, apple(10, 4));

	// ���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);

	return 0;
}

void p(int num) // ����
{
	printf("num�� %d�Դϴ�.\n", num);
}


// ���ް�:36
// �Լ� : ��+4
// ��ȯ�� : ?

// ��ȯ��: �Լ��̸� (���ް�) int, db,f,char, void(��ȯ x)
//int �Լ��̸�(int num1, int num2, char c ) // ��� main ���� ����� �����ؾ� ��
//{
//	return num + 4;
//}

void fucntion_without_return()
{
	printf("��ȯ�� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�\n");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸�, ���� ���� ���� %d, %d, %d�Դϴ�.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�\n");
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}