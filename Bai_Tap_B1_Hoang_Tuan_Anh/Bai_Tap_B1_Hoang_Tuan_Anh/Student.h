#pragma once
#include <iostream>
using namespace std;
class Student
{
public:
	Student(string id, string name, string dob, int math, int physics,int chemical,int markI,int markII);
	string toString();
	int getMath();
	int getChemis();
	int getPhysic();
	int getMaxPlusTwoSubj();
	int getMarkI();
	int getMarkII();
	int getAverage();
	Student();
private:
	std::string id,name,dob;
	int maths, physics, chemical, markI, markII;
};
