#include <stdio.h>
#include <time.h>

int main_condition(void)
{
	// ���� ž�� ��Ȳ, studen or ordinary person (op: age 20)
	/*int age = 15;
	if (age >= 20)
	{
		printf("Ordinary person\n");
	}
	else
	{
		printf("student\n");
	}*/

	// elementary or middle or high school student sortaion
	// can write "else if" several times , && = When all the conditions are satisfied
	/*int age = 30;
	{
		if (age >= 8 && age <= 13)
		{
		printf("elementary school student\n");
		}
		else if (age >= 14 && age <= 16)
		{
		printf("middle school student\n");
		}
		else if (age >= 14 && age <= 19)
		{
			printf("high school student\n");
		}
		else 
		{
			printf("adult or not student");
		}	
	}*/

	// break / continue
	// 1�� ~ 30���� �л��� �ִ� �ݿ��� 1~5������ ���� ��ǥ
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d �� �л��� ��ǥ�� �غ��ϼ���.\n", i);
	}*/

	// �� ���ǿ� 7�� �л��� �Ἦ���� �����ϰ� 6~10�� ���� ��ǥ 
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d �� �л��� ��ǥ�� �غ��ϼ���\n", i);
		}
	}*/

	// and(&&) / or(||)
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 12;
	if (a == b || c == d)
	{
		printf("a�� b, Ȥ�� c�� d�� ���� �����ϴ�\n");
	}
	else
	{
		printf("���� ���� �ٸ��ϴ�\n");
	}*/

	//����, switch case
	// ���� ���� ��
	/*srand(time(NULL));
	int i = rand() % 3; 
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}*/

	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i)
	//{
	//case 0:printf("����\n"); break; //break �ȳ����� �б� ���� ���� ���� ����
	//case 1:printf("�ָ�\n"); break;
	//case 2:printf("��\n"); break;
	//default:printf("�����\n"); break;
	//}

	/*int age = 11;
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("elementary school student\n"); break;
	case 14:
	case 15:
	case 16:printf("middle school student\n"); break;
	case 17:
	case 18:
	case 19:printf("high school student\n"); break;
	default:printf("not student"); break;
	}*/
	
	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) // 1�� ��, 0�� ���� 
	{
		printf("���� ��ȸ %d��\n", chance--);
		printf("���ڸ� ���������� (1~100)");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ��\n\n");
		}
		else if (answer < num)
		{
			printf("UP ��\n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ� ! \n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߽��ϴ�\n\n");
		}
		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����߽��ϴ�. -����-");
			break;
		}
	}
	return 0;
}