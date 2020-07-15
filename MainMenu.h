#pragma once
#include "Student.h"

class MainMenu : public Student
{
private:
	Student* mode;

public:
	MainMenu();
	~MainMenu();
	int Menu();
	void select();
};