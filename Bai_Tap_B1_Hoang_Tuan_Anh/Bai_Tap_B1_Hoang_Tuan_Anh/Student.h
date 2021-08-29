#pragma once
#include <iostream>
using namespace std;
class Student
{
public:
	Student(string id, string name, string dob, int math, int physics,int chemical);
	string toString();
	int getMath();
	int getChemis();
	int getPhysic();
	int getMaxPlusTwoSubj();
	Student();
private:
	std::string id,name,dob;
	int maths, physics, chemical;
};
