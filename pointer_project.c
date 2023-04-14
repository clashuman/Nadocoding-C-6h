#include <stdio.h>
#include <time.h>
// ����� 6���� ����
// �縷������ �ִ� ���׿� �������
// ���߼ӵ��� �ʹ� ���� ����
// ���� ��� �����ϱ� ���� ���׿� ���� ä�� ����⸦ �������

int level;
int arrayFish[6];
int* cursor;

void printFishes();
void initData();
void decreaseWater(long elapsedTime);

int main_PP(void)
{
	long startTime = 0; // long = �ð� ǥ�⿡ ���Ǵ� �ڷ���
	long totalElapsedTime = 0; // �� ��� �ð� /elapse = �帣��
	long prevElapssedTime = 0; // ���� ��� �ð� (���� �� �ð� ����)

	int num; // � ���׿� ���� �� ������. ����� �Է�
	initData();

	cursor = arrayFish;
	
	startTime = clock(); // ���� �ð��� millisecond (1õ���� 1��) ������ ��ȯ
	while (1)
	{
		printFishes();
		//getchar(); // �ӽ÷� ����� �Է� ��� = ���ͷ� �ѱ��
		printf(" �� �� ���׿� ���� �ְڽ��ϱ�?");
		scanf_s("%d", &num);

		//�Է°� üũ
		if (num < 1 || num >6)
		{
			printf("�Է°��� �߸� �Ǿ����ϴ�.\n");
			continue;
		}
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // �ʴ����� ����
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);

		// ���������� ���� �� ���ķ� �帥 �ð�
		prevElapssedTime = totalElapsedTime - prevElapssedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapssedTime);

		// ������ ���� ����
		decreaseWater(prevElapssedTime);

		// ����ڰ� �Է��� ���׿� ���� �ش�
		// 1. ������ ���� 0�̸�? ���� ���� �ʴ´�.
		if (cursor[num - 1] <= 0)
		{
			printf(" %d�� ������ �̹� �׾� ���� ���� �ʽ��ϴ�.\n", num);
		}
		// 2. ������ ���� 0�� �ƴ� ���? ���� �ش�, 100�� ���� �ʴ��� üũ
		else if (cursor[num - 1] + 1 <= 100)
		{
			// ���� �ִ�
			printf(" %d�� ���׿� ���� �ݴϴ٤�\n\n", num);
			cursor[num - 1] += 1;
		}

		// �������� �� ���� Ȯ��( 20�ʸ��� �ѹ��� ����)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf(" **** ������ %d -> %d ****\n\n", level - 1, level);

			if (level == 5)
			{
				printf("\n\n Ŭ�����ϼ̽��ϴ�. ������ �����մϴ�.\n");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			// ��� ����� ���
			printf("��� ����Ⱑ �׾����ϴ�.\n");
		}
		else
		{
			// �ּ� �Ѹ��� �̻� ����
			printf("����Ⱑ ���� �����Դϴ�\n.");
		}
		prevElapssedTime = totalElapsedTime;

		// ���� �� �� 10�� ��� -> ������ 15�� �� (5�� : prevElapsedTime) -> 15�ʷ� ����-> 25�� �� (10���� ������Ÿ��)
		// 10��, 15�ʶ� ���� �� prev�� 5�� ������. ���� ���� �������� total�� 15�ε�
		// prev�� 5�� �������־� �� ���� �Լ��� ������ ��ħ.
		// ���� while�� ������ ���� prev=total�� prev�� ���� �ٲٰ� p=t-p ������ �� ����.
		// �̷��� prev���� decrease�Լ��� ��ݿ� �Ǿ� �� ���ҷ��� �ùٸ��� ���ư�.
	}

	return  0;
}

void initData()
{
	level = 1; // 1~5
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // ������ �� ����(0~100)
	}
}

void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
	// %3d�� ��ĭ�� �Ҵ��Ͽ� d�� �޴°�, "%3d�� "���� 3ĭ, ������ 2ĭ, 1��ĭ
	// = 6ĭ �̱⶧���� printf�� ������ ĭ�� 6ĭ�� �ǰԲ� %4d�� �յ� ��ĭ ����
}
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3�� ���̵� ������
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; //���� �ǹ�
	}
	return 0;
}