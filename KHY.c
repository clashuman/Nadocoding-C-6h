#include <time.h>
#include <stdio.h>
int main_khy(void)
{
    int menu;
    printf("접속 중...\n"
    "\n비밀번호를 입력하시오\n");
    int PW;
    scanf_s("%d", &PW);
    printf("\n"
        "접속 완료\n\n"
        "C언어 봇 : 무슨 일로 오셨소\n" "\n  MENU"
    "\n< 1번 >\n" "< 2번 >\n\n");
    scanf_s("%d", &menu);
    
    if (menu == 1)
    {
        printf("\nC언어 봇 :%d번인 오늘의 바보를 알아보러 오셨구먼\n", menu);
        printf("\nC언어 봇 :오늘의 바보는 ");
        srand(time(NULL));
        int s = rand() % 100;
        if (s >= 0 && s <= 33)
        {
            printf(" 양선우 ");
        }
        else if (s >= 33 && s <= 66)
        {
            printf("한태준");
        }
        else if (s >= 66 && s <= 99)
        {
            printf("김성운");
        }
        else
        {
            printf("모두");
        }
        printf(" 일세\n");
    }
    else 
    {
        for (int i = 0; i <= 1; i++)
        {
            printf("\nC언어 봇 : 그런 메뉴는 없네.");
            break;
        }
    }
    printf("\n\nC언어 봇 : 이제 NAGA~\n");
    return 0;
}