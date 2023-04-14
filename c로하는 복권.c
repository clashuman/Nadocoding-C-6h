#include<stdio.h>
#include<time.h>

int main(void)
{
	int stop = 0;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			int Lottonum = rand() % 46;
			printf("%d ", Lottonum);
		}
		getchar();
		printf("\n\n");
		

	}
	return 0;
}

