#include "MainMenu.h"

MainMenu::MainMenu()
{
	mode = new Student;
}

MainMenu::~MainMenu()
{
	delete mode;
}

int MainMenu::Menu()
{
	int num;
	cout << endl;
	cout << "<<성적 관리 프로그램>>" << endl;
	cout << "1. 학생 성적 입력" << endl;
	cout << "2. 학생 성적 검색" << endl;
	cout << "3. 학생 성적 등급" << endl;
	cout << "4. 학생 성적 통계" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "---------------------" << endl;
	cout << "메뉴 선택 : ";
	cin >> num;

	return num;
}

void MainMenu::select()
{
	int key;
	while ((key = Menu()) != 5)
	{
		switch (key)
		{
		case 1:
			mode->setStudent();
			break;
		case 2:
			mode->searchStudent();
			break;
		case 3:
			mode->gradeStudent();
			break;
		case 4:
			mode->statsStudent();
			break;
		default:
			cout << endl;
			cout << "잘못된 메뉴입니다. 재입력바랍니다.";
			cout << endl;
			break;
		}
	}
	cout << "==프로그램을 종료합니다.==" << endl;
}
