#include <stdio.h>
int main_printfscanf(void)
{
	/*int age = 12; // int는 자료형태를
	printf("%d\n", age); // %d는 정수형 값 표기
	age = 13;
	printf("%d\n", age);*/

	// 실수형 변수 예제
	//float f = 46.5;
	//printf("%.2f\n", f);
	//double d = 4.428;
	//printf("%.2lf\n", d);  // %엘f, 표기자리까지 표기하고 반올림

	//const int YEAR = 2000; // const 변수 = 상수 지정(값 고정)
	//printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001;
	
	////printf
	////연산 
	//int add = 3 + 7; //10
	////printf("3+7=%d\n", add);
	//printf("%d*%d = %d\n", 30, 79, 30*79);

	//scanf
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); // %d를 받겠다 &에
	printf("입력값 : %d\n", input);*/
	
	/*int one, two, three;
	printf("3개의 정수를 입력하세요 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	//문자, 문자열
	//char c = 'A'; //character
	//printf("%c\n", c);

	/*char str[256]; //str[] 여러 character을 받기위해 칸을 만듦
	//scanf_s("%s", str, (unsigned int) sizeof(str)); // scanf_s로 받아다 저장한다는 &은 문자열에선 생략
	//scanf_s("%s", str, 256); // 택1
	printf("%s\n", str);*/

	// 프로젝트
	// 조서 작성
	// 이름? 나이? 몸무게? 범죄명?
	/*char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이예요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이예요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm이예요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름		: %s\n", name);
	printf("나이		: %d\n", age);
	printf("몸무게		: %.2f\n", weight);
	printf("키		: %.2lf\n", height);
	printf("범죄명		: %s\n", what);*/

	return 0;



}
