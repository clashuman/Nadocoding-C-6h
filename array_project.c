#include <stdio.h>
#include <time.h>



int main_ArrayPro(void)
{
	srand(time(NULL));
	printf("\n\n === �������� ��Ӹ� === \n");
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸��� ���� (0~3)

	int countShowBottle = 0; // ���� �� ����
	int prevCntShowBottle = 0; // ������� �� ����
	// ����� ��� (2 -> 3��...)

	// 3���� ��ȸ 
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 }; //4���� ��
		do {
			countShowBottle = rand() % 2 + 2; // ����� �� ���� (2 or 3)
		} while (countShowBottle == prevCntShowBottle);
		prevCntShowBottle = countShowBottle;

		int isinclude = 0; // ����� �� �߿� �߸����� ���Եƴ��� ����(1�̸� ������ �ǹ�)
		
		printf("\n > %d ��° �õ� : ", i);

		// �� ���� ����
		for (int j = 0; j < countShowBottle; j++)
		{
			int randBottle = rand() % 4; //0~3

			// ���� ���õ��� ���� ���̸�, ���� ó��
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isinclude = 1;
				}
			}
			// �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
			else
			{
				j--;
			}
		}
		// ����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++)
		{
			if(bottle[k] == 1)
				printf("%d ", k + 1); // �迭�� 0���ʹϱ� ���� ���� 1����~�� ���̷���
		}
		printf("������ �Ӹ��� �ٸ��ϴ�\n\n");

		if (isinclude == 1)
		{
			printf(" >> ����! �Ӹ��� ����� \n");
		}
		else
		{
			printf(" >> ����! �Ӹ��� ���� �ʾҾ��\n");
		}

		printf("\n ����Ϸ��� �ƹ�Ű�� ��������\n");
		getchar(); // ����ڰ� �Է��� ������ ���Ÿ�� �뵵�� �Լ�
	}

	printf("\n\n�߸����� �� ���ϱ��?");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) // ������� ���̴� �� +1 �Ǿ�����
	{
		printf("\n >> �����Դϴ�!\n");
	}
	else
	{
		printf("\n >> Ʋ�Ƚ��ϴ�. ������ %d�Դϴ�\n", treatment + 1);
	}
	return 0;
}