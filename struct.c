#include<stdio.h>

struct Gameinfo {
	char* name;
	int year; 
	int price; 
	char* company;

	struct Gameinfo* friendGame; // ������ü ����
};

typedef struct Gameinformation {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; // ������ü ����
} GAME_INFO;  // struct �ڿ� ������ �Ⱦ��� ���� ���� ���� ����� �� 

int main_struct(void)
{
	// [���� ���]
	// �̸� : c����
	// �߸ų⵵ : 2023
	// ���� : 11��
	// ���� ȸ�� : �谡��

	//char *name = "c����";
	//int year = 2023;
	//int price = 11;
	//char *company = "�谡��";

	//// [�Ǵٸ� ���� ���]
	//// �̸� : �ð���
	//// �߸ų⵵ : 2023
	//// ���� : 10��
	//// ���� ȸ�� : �达��

	//char* name2= "������";
	//int year2 = 2023;
	//int price2 = 22;
	//char* company2 = "�达��";

	// struct ��� / 'struct i' �� �ڷ��� �ڿ��� ������
	struct Gameinfo gameinfo1;
	gameinfo1.name = "c����";
	gameinfo1.year = 2023;
	gameinfo1.price = 10;
	gameinfo1.company = "�谡��";

	// ����ü ���
	printf(" -- ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gameinfo1.name);
	printf("  �߸ų⵵ : %d\n", gameinfo1.year);
	printf("  ����     : %d\n", gameinfo1.price);
	printf("  ���ۻ�   : %s\n", gameinfo1.company);

	// ����ü �迭ó�� �ʱ�ȭ
	struct Gameinfo gameinfo2 = { "������", 2023, 11, "�达��" };
	printf(" -- �� �ٸ� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gameinfo2.name);
	printf("  �߸ų⵵ : %d\n", gameinfo2.year);
	printf("  ����     : %d\n", gameinfo2.price);
	printf("  ���ۻ�   : %s\n", gameinfo2.company);

	// ����ü �迭
	struct Gameinfo gameArray[2] = {
		{"C����", 2023, 22, "�谡��"},
		{"������", 2023, 11, "�达��"}
	};

	// ����ü ������
	struct Gameinfo* gamePtr; // �̼Ǹ�
	gamePtr = &gameinfo1;
	printf(" -- �̼Ǹ��� ���� ��� ���� --\n");
	//printf("  ���Ӹ�   : %s\n", (*gamePtr).name); // int�� �ڷῡ�� *ptr
	//printf("  �߸ų⵵ : %d\n", (*gamePtr).year);
	//printf("  ����     : %d\n", (*gamePtr).price);
	//printf("  ���ۻ�   : %s\n", (*gamePtr).company);
	printf("  ���Ӹ�   : %s\n", gamePtr->name);
	printf("  �߸ų⵵ : %d\n", gamePtr->year);
	printf("  ����     : %d\n", gamePtr->price);
	printf("  ���ۻ�   : %s\n", gamePtr->company);

	// ���� ��ü ���� �Ұ�
	gameinfo1.friendGame = &gameinfo2;
	printf(" -- ������ü�� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gameinfo1.friendGame->name);
	printf("  �߸ų⵵ : %d\n", gameinfo1.friendGame->year);
	printf("  ����     : %d\n", gameinfo1.friendGame->price);
	printf("  ���ۻ�   : %s\n", gameinfo1.friendGame->company);
	return 0;

	// typedef
	// �ڷ����� ���� ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; // int i =3;
	�Ǽ� �Ǽ����� = 3.23f; // float f = 3.23f;
	printf("\n\n�������� : %d, �Ǽ�����:%2f\n\n", ��������, �Ǽ�����);

	typedef struct Gameinfo ��������; // struct Gameinfo = ��������
	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2023;

	GAME_INFO game2;
	game2.name = "�ѱ۰���2";
	game2.year = 2023;

	struct Gameinformation game3; 
	game3.name = "�ѱ۰���3";
	// Gameinformation�� struct ���𿡼� 
	// ������ ���� �̸�����(GAME_INFO)�� �س���
	// Gameinformation�� �� ���� GAME_INFO�� ��� ����
}