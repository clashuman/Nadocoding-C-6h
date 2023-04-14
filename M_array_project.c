#include <stdio.h>
#include <time.h>

// 10������ ���� �ٸ� ���� (�� ���徿)
// ����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ���� ã���� ī�� ������
// ��� ���� ���߸� ���� ����
// �� ����Ƚ�� �˷��ֱ�

int arrayAnimal[4][5]; // ī�� ���� (20���� ī��)
char* strAnimal[10]; 
int checkAnimal[4][5]; // ���������� Ȯ��

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyposition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printfAnimals();
void printfQuestion();
int foundAllAnimals();

int main_M_array_Project(void)
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();


	shuffleAnimal();

	int failCount = 0; // ���� Ƚ��

	while (1)
	{
		int select1 = 0;
		int select2 = 0;

		printfAnimals(); // ���� ��ġ ���
		printfQuestion(); // ���� ��� (ī�� ����)
		printf(" ������ ī�� 2���� �����ϼ��� : ");
		scanf_s(" %d %d", &select1, &select2);

		if (select1 == select2)
			continue;
		
		// ��ǥ�� �ش��ϴ� ī�带 ������ ���� ���� Ȯ��

		//���� ��ǥ�� (x,y)�� ��ȯ
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// ī�尡 �������� �ʾҴ��� && ���� ������ ���
		if ((checkAnimal[firstSelect_x][firstSelect_y]==0
			&& checkAnimal[secondSelect_x][secondSelect_y]==0)
			&& 
			(arrayAnimal[firstSelect_x][firstSelect_y]
			== arrayAnimal[secondSelect_x][secondSelect_y]))
		{
			printf("\n\n ����! : %s �߰�\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		// �ٸ� ������ ���
		else 
		{
			printf("\n\n ����! \n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		if (foundAllAnimals() == 1)
		{
			printf("\n\n ��� ������ ã�ҽ��ϴ�!\n");
			printf("���ݱ��� �� %d�� �Ǽ��߽��ϴ�\n",failCount);
			break;
		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}
void initAnimalName()
{
	strAnimal[0] = "Monkey";
	strAnimal[1] = "Hippo";
	strAnimal[2] = "Dog";
	strAnimal[3] = "Cat";
	strAnimal[4] = "Pig";
	strAnimal[5] = "Elephant";
	strAnimal[6] = "Giraffe";
	strAnimal[7] = "Camel";
	strAnimal[8] = "ostrich";
	strAnimal[9] = "Tiger";

}

void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyposition(); // �� ��ġ ��ȯ
			int x = conv_pos_x(pos); // ��ȯ ���� x,y�� ��ȯ convert
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

// ��ǥ���� �� ���� ã��
int getEmptyposition()
{
	// ������  0  1  2  3  4  -> 5�� ������ 0 
	// ������  5  6  7  8  9  -> 1 1 1 1 1
	// ������  10 11 12 13 14 -> 2 2 2 2 2
	// ������  15 16 17 18 19 -> 3 3 3 3 3
	while (1)
	{
		int randPos = rand() % 20; // 0~19 ���� ���� ��ȯ
		// 19 -> (3,4)
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
	return 0;
}
int conv_pos_x(int x)
{
	// 19 -> (3,4)
	return x / 5;
}
int conv_pos_y(int y)
{
	// 19 -> 19/5 => ���� 3, ������ 4
	return y % 5; // y�� 5�� ���� ������ ��
}
void printfAnimals() // ���� ��ġ ���
{
	// ������  
	// ������  
	// ������  
	// ������  
	printf("\n===== �����ڸ� ���̴� ����=====\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%12s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n===================\n\n");
}
void printfQuestion()
{
	printf("\n\n ����\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// ����� "�����̸� "
			if (checkAnimal[i][j] != 0)
			{
				printf("%12s", strAnimal[arrayAnimal[i][j]]);
			}
			// �����߸� �޸� -> ��ġ�� ��Ÿ���� ����
			else
			{
				printf("%12d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}
int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1; // ��� �� ã��
}