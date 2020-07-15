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
	void showStudent();		//학생 정보 출력
	void setStudent();		//학생 이름, 성적123 입력
	void searchStudent();	//학생 이름 입력 후 데이터화면 출력
	void gradeStudent();	//학생 등급 출력
	void statsStudent();	//학생 통계 출력
	bool check();		//이름 입력 범위를 벗어나는지 확인
};