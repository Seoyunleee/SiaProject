// siamidtermtest02.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector> 
#include<conio.h>
#include<windows.h>
using namespace std;

// pitch 
class pitch
{
public:
	virtual void play()
	{
		std::cout << "pitch play" << std::endl;
	}
};

// 도
class 도C5 : public pitch

{
public:
	virtual void play() override
	{
		std::cout << "도C5 play" << std::endl;
		Beep(523, 300); // C5 도 
	}
};

// 레
class 레D5 : public pitch
{
public:
	virtual void play() override
	{
		std::cout << "레D5 play" << std::endl;
		Beep(587, 300); // D5 레
	}
};

// 미 
class 미E5 : public pitch
{
public:
	virtual void play() override
	{
		std::cout << "미E5 play" << std::endl;
		Beep(659, 300); // E5 미
	}
};

// 파
class 파F5 : public pitch
{
public:
	virtual void play() override
	{
		std::cout << "파F5 play" << std::endl;
		Beep(698, 300); // F5 파
	}
};

// 솔
class 솔G5 : public pitch
{
public:
	virtual void play() override
	{
		std::cout << "솔G5 play" << std::endl;
		Beep(784, 300); // G5 솔
	}
};

// 라
class 라A5 : public pitch
{
public:
	virtual void play() override
	{
		std::cout << "라A5 play" << std::endl;
		Beep(880, 300); // A5 라
	}
};

// 시
class 시B5 : public pitch
{
public:
	virtual void play() override
	{
		std::cout << "시B5 play" << std::endl;
		Beep(988, 300); // B5 시
	}
};

// 도2
class 도C6 : public pitch

{
public:
	virtual void play() override
	{
		std::cout << "도C6 play" << std::endl;
		Beep(1046, 300); // C6 도 
	}
};

int main()
{
	
	//상단 메인 화면 출력하기
	system("mode con cols=56 lines=20 | title 음계 입/출력 프로그램_이서윤");
	printf("\n\n");
	printf("############### <음계 입/출력 프로그램> ###############");
	printf("\n\n");
	printf("---------♩----------♩-------♬-----------------♪-------------------♪----------------------");
	printf("--------♬----------------------------------------------------------------------------");
	printf("-------------------------♩----♩--------------------------------♩-----------------------");
	printf("----------");
	printf("\n\n");
	printf("    *1도2레3미4파5솔6라7시8도/9(추가된 음계 출력)*  ");
	printf("\n\n");
	std::vector<pitch*> v1; // pitch 저장

	while (1)
	{

		int i;
		std::cin >> i;
	
		if (i == 1) v1.push_back(new 도C5); // 사용자 입력이 1일때 도 추가 
		else if (i == 2) v1.push_back(new 레D5); // 사용자 입력이 2일때 레 추가 
		else if (i == 3) v1.push_back(new 미E5); // 사용자 입력이 3일때 미 추가 
		else if (i == 4) v1.push_back(new 파F5); // 사용자 입력이 4일때 파 추가
		else if (i == 5) v1.push_back(new 솔G5); // 사용자 입력이 5일때 솔 추가
		else if (i == 6) v1.push_back(new 라A5); // 사용자 입력이 6일때 라 추가
		else if (i == 7) v1.push_back(new 시B5); // 사용자 입력이 7일때 시 추가
		else if (i == 8) v1.push_back(new 도C6); // 사용자 입력이 8일때 도 추가
		if (i == 9) // 사용자 입력이 9일때 추가된 pitch 전체 출력 
		{
			for (int play = 0; play < v1.size(); play++)
				v1[play]->play();
		}
		
	}
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
