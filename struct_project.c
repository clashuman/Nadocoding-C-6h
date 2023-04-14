#include<stdio.h>
#include<time.h>

// 5������ ����̰� ����
// �ƹ� Ű�� ���� �������� ����� �̱�
// �ߺ� �߻� ����

// ����� ����
// �̸�, ����, ����, Ű��� ���̵�(����)

typedef struct �л� {
	char* name;
	int age;
	char* character;
	int level;
} Student;

// ������� ���� �л�
int Attendance_book[5] = { 0, 0, 0, 0, 0 };

// ��ü �л� ����Ʈ
Student Ab_Student[5];

void initAbidos(); // �л� ���� �ʱ�ȭ
void printfStudents(int selected);

int main_sp(void)
{
	srand(time(NULL));

	initAbidos();
	
	while (1)
	{
		printf("�ƺ񵵽� �Ⱦ� �̺�Ʈ!\n \t 120û�ּ� \t\t1200û�ּ�\n\n");
		printf("\t\t ���κ�Ź�帳�ϴ�!\n");
		getchar();

		int selected = rand() % 5; // 0~4���� ���� ��ȯ
		printfStudents(selected); // ���� �л� ���� ���

		Attendance_book[selected] = 1; // �л� �̱� ó��

		int AttendanceAll = checkAttendance();
		if (AttendanceAll == 1)
		{
			break;
		}
	}

	return 0;
}

void initAbidos()
{
	Ab_Student[0].name = "ȣ�ó�";
	Ab_Student[0].age = 17;
	Ab_Student[0].character = "������";
	Ab_Student[0].level = 5;
	
	Ab_Student[1].name = "�÷���";
	Ab_Student[1].age = 16;
	Ab_Student[1].character = "Ȱ����";
	Ab_Student[1].level = 4;
	
	Ab_Student[2].name = "����";
	Ab_Student[2].age = 16;
	Ab_Student[2].character = "������";
	Ab_Student[2].level = 3;

	Ab_Student[3].name = "����ī";
	Ab_Student[3].age = 15;
	Ab_Student[3].character = "������";
	Ab_Student[3].level = 2;
	
	Ab_Student[4].name = "�ƾ߳�";
	Ab_Student[4].age = 15;
	Ab_Student[4].character = "������";
	Ab_Student[4].level = 2;
		 
}

void printfStudents(int selected)
{
	printf("\n\n ====== �л� ����! ======\n");
	printf("�̸�	: %s\n", Ab_Student[selected].name);
	printf("����	: %d\n", Ab_Student[selected].age);
	printf("����	: %s\n", Ab_Student[selected].character);
	printf("���̵�  : ");

	for (int i = 0; i < Ab_Student[selected].level; i++)
	{
		printf("%s", "��");
	}
	printf("\n\n");

}
int checkAttendance()
{
	// ���� ������ �л� ��� ���, �� ��Ҵ��� ���� ��ȯ
	int AttendanceAll = 1;


	printf("\n\n ===������ �л� ���=== \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (Attendance_book[i] == 0) // �л� ���� X
		{
			printf("%10s", "(��ڽ�)");
			AttendanceAll = 0; // �� ������ ���� ����
		}
		else // �л� ���� O
		{
			printf("%10s", Ab_Student[i].name);
		}
	}
	printf("\n====================\n\n");

	if (AttendanceAll) // �� ���� ���
	{
		printf("\n ��� �л� �⼮ �Ϸ�!\n");
	}
	return AttendanceAll;
}