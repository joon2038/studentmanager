#include "Student.h"

Student::Student()
{
	name = new char[20];
	score1 = 0;
	score2 = 0;
	score3 = 0;
	total = 0;
	average = 0;
}

Student::~Student()
{
	delete[] name;
}

void Student::showStudent()
{

}

void Student::setStudent()
{
	Student list[3];

	cout << "������ �̸��� �������� �Է��ϼ���." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "�л�" << i + 1 << " �̸� : ";
		cin >> list[i].name;
		
		cout << "�л�" << i + 1 << " ����1"  << " : ";
		cin >> list[i].score1;
		if (list[i].score1 < 0 || list[i].score1 >100) {
			cout << "�Է¹����ʰ�" << endl;
		}
		else {

			cout << "�л�" << i + 1 << " ����2" << " : ";
			cin >> list[i].score2;
			check();

			cout << "�л�" << i + 1 << " ����3" << " : ";
			cin >> list[i].score3;
			check();
		}
	}
	cout << endl;

}



void Student::searchStudent()
{
}

void Student::gradeStudent()
{
}

void Student::statsStudent()
{
}



bool Student::check()
{
	if (score1 < 0 || score1 >100 || score2 < 0 || score2 >100 || score3 < 0 || score3 >100) {
		cout << "���� ����(0~100)�� ����ϴ�." << endl;
		return false;
	}
	else
		return true;
}
