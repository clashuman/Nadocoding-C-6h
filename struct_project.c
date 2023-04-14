#include<stdio.h>
#include<time.h>

// 5마리의 고양이가 존재
// 아무 키를 눌러 무작위로 고양이 뽑기
// 중복 발생 가능

// 고양이 정보
// 이름, 나이, 성격, 키우기 난이도(레벨)

typedef struct 학생 {
	char* name;
	int age;
	char* character;
	int level;
} Student;

// 현재까지 나온 학생
int Attendance_book[5] = { 0, 0, 0, 0, 0 };

// 전체 학생 리스트
Student Ab_Student[5];

void initAbidos(); // 학생 정보 초기화
void printfStudents(int selected);

int main_sp(void)
{
	srand(time(NULL));

	initAbidos();
	
	while (1)
	{
		printf("아비도스 픽업 이벤트!\n \t 120청휘석 \t\t1200청휘석\n\n");
		printf("\t\t 사인부탁드립니다!\n");
		getchar();

		int selected = rand() % 5; // 0~4사이 숫자 반환
		printfStudents(selected); // 뽑은 학생 정보 출력

		Attendance_book[selected] = 1; // 학생 뽑기 처리

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
	Ab_Student[0].name = "호시노";
	Ab_Student[0].age = 17;
	Ab_Student[0].character = "게으름";
	Ab_Student[0].level = 5;
	
	Ab_Student[1].name = "시로코";
	Ab_Student[1].age = 16;
	Ab_Student[1].character = "활발함";
	Ab_Student[1].level = 4;
	
	Ab_Student[2].name = "노노미";
	Ab_Student[2].age = 16;
	Ab_Student[2].character = "다정함";
	Ab_Student[2].level = 3;

	Ab_Student[3].name = "세리카";
	Ab_Student[3].age = 15;
	Ab_Student[3].character = "츤데레";
	Ab_Student[3].level = 2;
	
	Ab_Student[4].name = "아야네";
	Ab_Student[4].age = 15;
	Ab_Student[4].character = "지적임";
	Ab_Student[4].level = 2;
		 
}

void printfStudents(int selected)
{
	printf("\n\n ====== 학생 등장! ======\n");
	printf("이름	: %s\n", Ab_Student[selected].name);
	printf("나이	: %d\n", Ab_Student[selected].age);
	printf("성격	: %s\n", Ab_Student[selected].character);
	printf("난이도  : ");

	for (int i = 0; i < Ab_Student[selected].level; i++)
	{
		printf("%s", "★");
	}
	printf("\n\n");

}
int checkAttendance()
{
	// 현재 보유한 학생 목록 출력, 다 모았는지 여부 반환
	int AttendanceAll = 1;


	printf("\n\n ===보유한 학생 목록=== \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (Attendance_book[i] == 0) // 학생 수집 X
		{
			printf("%10s", "(빈박스)");
			AttendanceAll = 0; // 다 모으지 못한 상태
		}
		else // 학생 수집 O
		{
			printf("%10s", Ab_Student[i].name);
		}
	}
	printf("\n====================\n\n");

	if (AttendanceAll) // 다 모은 경우
	{
		printf("\n 모든 학생 출석 완료!\n");
	}
	return AttendanceAll;
}