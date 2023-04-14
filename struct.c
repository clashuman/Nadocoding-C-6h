#include<stdio.h>

struct Gameinfo {
	char* name;
	int year; 
	int price; 
	char* company;

	struct Gameinfo* friendGame; // 연관업체 게임
};

typedef struct Gameinformation {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; // 연관업체 게임
} GAME_INFO;  // struct 뒤에 변수명 안쓰고 따로 붙인 별명만 써놔도 됨 

int main_struct(void)
{
	// [게임 출시]
	// 이름 : c게임
	// 발매년도 : 2023
	// 가격 : 11원
	// 제작 회사 : 김가네

	//char *name = "c게임";
	//int year = 2023;
	//int price = 11;
	//char *company = "김가네";

	//// [또다른 게임 출시]
	//// 이름 : 시게임
	//// 발매년도 : 2023
	//// 가격 : 10원
	//// 제작 회사 : 김씨네

	//char* name2= "씨게임";
	//int year2 = 2023;
	//int price2 = 22;
	//char* company2 = "김씨네";

	// struct 사용 / 'struct i' 가 자료형 뒤에가 변수형
	struct Gameinfo gameinfo1;
	gameinfo1.name = "c게임";
	gameinfo1.year = 2023;
	gameinfo1.price = 10;
	gameinfo1.company = "김가네";

	// 구조체 출력
	printf(" -- 게임 출시 정보 --\n");
	printf("  게임명   : %s\n", gameinfo1.name);
	printf("  발매년도 : %d\n", gameinfo1.year);
	printf("  가격     : %d\n", gameinfo1.price);
	printf("  제작사   : %s\n", gameinfo1.company);

	// 구조체 배열처럼 초기화
	struct Gameinfo gameinfo2 = { "씨게임", 2023, 11, "김씨네" };
	printf(" -- 또 다른 게임 출시 정보 --\n");
	printf("  게임명   : %s\n", gameinfo2.name);
	printf("  발매년도 : %d\n", gameinfo2.year);
	printf("  가격     : %d\n", gameinfo2.price);
	printf("  제작사   : %s\n", gameinfo2.company);

	// 구조체 배열
	struct Gameinfo gameArray[2] = {
		{"C게임", 2023, 22, "김가네"},
		{"씨게임", 2023, 11, "김씨네"}
	};

	// 구조체 포인터
	struct Gameinfo* gamePtr; // 미션맨
	gamePtr = &gameinfo1;
	printf(" -- 미션맨의 게임 출시 정보 --\n");
	//printf("  게임명   : %s\n", (*gamePtr).name); // int형 자료에는 *ptr
	//printf("  발매년도 : %d\n", (*gamePtr).year);
	//printf("  가격     : %d\n", (*gamePtr).price);
	//printf("  제작사   : %s\n", (*gamePtr).company);
	printf("  게임명   : %s\n", gamePtr->name);
	printf("  발매년도 : %d\n", gamePtr->year);
	printf("  가격     : %d\n", gamePtr->price);
	printf("  제작사   : %s\n", gamePtr->company);

	// 연관 업체 게임 소개
	gameinfo1.friendGame = &gameinfo2;
	printf(" -- 연관업체의 게임 출시 정보 --\n");
	printf("  게임명   : %s\n", gameinfo1.friendGame->name);
	printf("  발매년도 : %d\n", gameinfo1.friendGame->year);
	printf("  가격     : %d\n", gameinfo1.friendGame->price);
	printf("  제작사   : %s\n", gameinfo1.friendGame->company);
	return 0;

	// typedef
	// 자료형에 별명 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; // int i =3;
	실수 실수변수 = 3.23f; // float f = 3.23f;
	printf("\n\n정수변수 : %d, 실수변수:%2f\n\n", 정수변수, 실수변수);

	typedef struct Gameinfo 게임정보; // struct Gameinfo = 게임정보
	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2023;

	GAME_INFO game2;
	game2.name = "한글게임2";
	game2.year = 2023;

	struct Gameinformation game3; 
	game3.name = "한글게임3";
	// Gameinformation을 struct 선언에서 
	// 지워도 따로 이름설정(GAME_INFO)을 해놔서
	// Gameinformation을 못 쓸뿐 GAME_INFO는 사용 가능
}