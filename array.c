#include <stdio.h>

int main_array(void)
{
	///�迭
	/*int subway_1 = 30; 
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� #d���� Ÿ���ִ�.\n", subway_1);
	printf("����ö 2ȣ���� #d���� Ÿ���ִ�.\n", subway_2);
	printf("����ö 3ȣ���� #d���� Ÿ���ִ�.\n", subway_3);*/


	// ���� ���� ������ �Բ�, ���ÿ� ����
	//int subway_array[3]; // [] = �迭 ĭ
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	//}

	// �� ���� ���
	// ���� �ʱ�ȭ�� �ݵ�� �ؾ� �� [10] =����, {1,2,...} = �� �ʱ�ȭ
	// �迭 ũ��� �׻� ����� ����, ���� ���� ĭ�� ���� 0���� ��µ�
	
	/*int arr[10] = { 6,9,7,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//int arr[] = { 1,2 }; // arr[2]
	
	// ���� vs ���ڿ�
	/*char c = 'A';
	printf("%c\n", c);*/

	// ���ڿ� ������ ���� �ǹ��ϴ� NULL���� '\0 �� ���ԵǾ�� ��
	//char str[6] = "coding"; // [c][o][d][i][n][g]+[\0]
	/*char str[7] = "coding";
	printf("%s\n", str);*/

	//char str[] = "coding";
	///*printf("%s\n", str);
	//printf("%d\n", sizeof(str));*/

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	/*char kor[] = "�輺��";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/
	// ���� 1�� : 1 byte   En gl ish
	// �ѱ� 1�� : 2 byte   �� ��
	// char ũ�� : 1 byte

	/*char c_array[7] = { 'c','o','d','i','n','g','\0'};
	printf("%s\n", c_array);*/

	//char c_array[10] = { 'c','o','d','i','n','g' };
	/*printf("%s\n", c_array);*/
	/*for (int i = 0; i < sizeof(c_array); i++)\
	{
		printf("%c\n", c_array[i]);
	}*/
	//for (int i = 0; i < sizeof(c_array); i++)\
	//{
	//	printf("%d\n", c_array[i]); // ASCII �ڵ� �� ��� (NULL���ڴ� 0���� �Էµ�
	//}

	// ���ڿ� �Է¹ޱ� : ������ ���� ����
	/*char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	

	return 0;
}