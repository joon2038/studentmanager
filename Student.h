#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	char* name;
	int score1, score2, score3, total;
	double average;

public:
	Student();			
	~Student();			
	void showStudent();		//�л� ���� ���
	void setStudent();		//�л� �̸�, ����123 �Է�
	void searchStudent();	//�л� �̸� �Է� �� ������ȭ�� ���
	void gradeStudent();	//�л� ��� ���
	void statsStudent();	//�л� ��� ���
	bool check();		//�̸� �Է� ������ ������� Ȯ��
};