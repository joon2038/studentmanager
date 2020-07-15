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

	cout << "세명의 이름과 점수들을 입력하세요." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "학생" << i + 1 << " 이름 : ";
		cin >> list[i].name;
		
		cout << "학생" << i + 1 << " 점수1"  << " : ";
		cin >> list[i].score1;
		if (list[i].score1 < 0 || list[i].score1 >100) {
			cout << "입력범위초과" << endl;
		}
		else {

			cout << "학생" << i + 1 << " 점수2" << " : ";
			cin >> list[i].score2;
			check();

			cout << "학생" << i + 1 << " 점수3" << " : ";
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
		cout << "점수 범위(0~100)을 벗어납니다." << endl;
		return false;
	}
	else
		return true;
}
