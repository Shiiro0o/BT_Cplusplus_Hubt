#pragma once
#include "Student.h"
#include <iostream>
#include<vector>
class ManagerStudent
{
public:
	ManagerStudent();
	void addMoreStudent();
	void showStudentMaxPlusTwoSubject();
	void showStudentPlusSubjectBiggerThenTwenty();
	void showStudent();
private:
	std::vector<Student> mListStudent;
	
};

