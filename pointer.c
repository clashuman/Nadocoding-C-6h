#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* ptr);

int main_pointer(void)
{
	// ������ == ������ �ּҰ��� ������ ���� ��ȭ��ų �� ����

	// [ö��] : 101ȣ -> �޸� ������ �ּ� '&'
	// [����] : 201ȣ
	// [�μ�] : 301ȣ
	// ���տ� ��ȣ�� �ɷ�����
	//int ö�� = 1; 
	//int ���� = 2;
	//int �μ� = 3;

	//printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	//printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);
	//printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &�μ�, �μ�);

	//// �̼Ǹ�

	//// ù ��° �̼� : ������ �� ���� �湮�Ͽ� ��ȣ Ȯ��
	//int * �̼Ǹ�;  // ������ ����
	//�̼Ǹ� = &ö��;
	//printf("�̼Ǹ��� �湮�� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//�̼Ǹ� = &����;
	//printf("�̼Ǹ��� �湮�� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//// �� ��° �̼� : �� ��ȣ�� 3�� ���ض�
	//�̼Ǹ� =  &ö��;
	//*�̼Ǹ� = *�̼Ǹ� * 3;
	//printf("�̼Ǹ��� ��ȣ�� �ٲ� ���ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//// ������
	//// �̼Ǹ��� �ٲ� ��ȣ���� 2�� ����
	//int * ������ = �̼Ǹ�;
	//printf("\n ... ������ �̼� ���� ��...\n\n");
	//������ = &ö��;
	//*������ = *������ - 2; // ö�� = ö�� -2
	//printf("�����̰� �湮�ϴ� �ּ� : %d, ��ȣ : %d\n", ������, *������);

	//������ = &����;
	//*������ = *������ - 2;
	//printf("�����̰� �湮�ϴ� �ּ� : %d, ��ȣ : %d\n", ������, *������);


	//printf("\n ö�� ����� �ٲ� ��ȣ�� ���� ���\n");

	//printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	//printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);

	//// ����.. �̼Ǹ��� ��� ���� �ּҴ� &�̼Ǹ����� Ȯ��
	//printf("�̼Ǹ��� �ּ� : %d\n", &�̼Ǹ�);


	// �迭�� �����ʹ� ������
	//int arr[3] = { 5,10,15 };
	//int * ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
	//}
	
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
	//	printf("�迭 arr[%d] �� �� : %d\n", i, *(arr+i));
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
	//	printf("������ ptr[%d] �� �� : %d\n", i, *(ptr+i)); //����ǥ��
	//}
	
	// arr ���� == ���� �迭�� ù��° ���� �ּҿ� ���� == &arr[0]
	// ���� *ptr = arr; �� ���� �����Ͱ� �迭�� ���� ���� ������ �� 

	// *& �� �ƹ��͵� ���� �Ͱ� ����. 
	//ȣ���Ϸ��°� &�� �ּ�, *�� �ּ��� ���̶� ����
	//printf("arr[0]�� ���� �� :%d\n", *&*&*&arr[0]);
	//printf("arr[0]�� ���� �� :%d\n", arr[0]);


	// swap
	//int a = 10;
	//int b = 20;
	//printf("a�� �ּ� : %d\n", &a);
	//printf("b�� �ּ� : % d\n", &b);

	//// a�� b�� ���� �ٲ۴�
	//printf("Swap �Լ� ��=> a : %d, b : %d\n", a, b); // 10, 20
	//swap(a, b);
	//printf("Swap �Լ� ��=> a : %d, b : %d\n", a, b); // 10, 20

	//// ���� ���� ���� (call by value) -> ���� �����Ѵٴ� �ǹ�
	//// main �������� �״�ΰ� ���� �Լ� �������� �ٲ�� ������
	//// => main������ a�� b�� �ƴ� ���� 10�� 20�� ������ ���⶧��. 

	//// �ּҰ��� �ѱ��? �޸� ������ �ִ� �ּҰ� ��ü�� �ѱ��..
	//printf("(�ּҰ� ����)Swap �Լ� ��=> a : %d, b : %d\n", a, b);
	//swap_addr(&a, &b);
	//printf("(�ּҰ� ����)Swap �Լ� ��=> a : %d, b : %d\n", a, b);

	// �迭�� ��, arr2 -> �ּ�
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}

	

	return 0;
}

void swap(int a, int b)
{
	/*printf("Swap �Լ� �� a�� �ּ� : %d\n", &a);
	printf("Swap �Լ� �� b�� �ּ� : % d\n", &b); */// �̰��� ���� �ּҰ� �ٸ��� �˼� �ִ�.

	int temp = a;
	a = b;
	b = temp;
	printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
}

void swap_addr(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d, b : %d\n", *a, *b);
}

void changeArray(int *ptr)
{
	ptr[2] = 50;
}