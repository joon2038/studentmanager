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
	cout << "<<���� ���� ���α׷�>>" << endl;
	cout << "1. �л� ���� �Է�" << endl;
	cout << "2. �л� ���� �˻�" << endl;
	cout << "3. �л� ���� ���" << endl;
	cout << "4. �л� ���� ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "---------------------" << endl;
	cout << "�޴� ���� : ";
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
			cout << "�߸��� �޴��Դϴ�. ���Է¹ٶ��ϴ�.";
			cout << endl;
			break;
		}
	}
	cout << "==���α׷��� �����մϴ�.==" << endl;
}
