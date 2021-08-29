#include "Student.h"
Student::Student(string id, string name, string dob, int math, int physics, int chemical)
{
	this->id = id;
	this->name = name;
	this->dob = dob;
	this->maths = math;
	this->physics = physics;
	this->chemical = chemical;
}

string Student::toString()
{
	return "ID: " + this->id
		+ "\nName: " + this->name +
		"\n date of birth: " + this->dob;
}

int Student::getMath()
{
	return this->maths;
}

int Student::getChemis()
{
	return this->chemical;
}

int Student::getPhysic()
{
	return this->physics;
}

int Student::getMaxPlusTwoSubj()
{
	int max1 = this->maths;
	if (max1 > this->chemical) {
		max1 = chemical;
	};
	if (max1 > this->physics) {
		max1 = this->physics;
	}
	int max2 = this->maths;

	if (max2 > this->chemical && max2 < max1) {
		max2 = this->chemical;
	}
	if (max2 > this->physics && max2 < max1) {
		max2 = this->physics;
	}
	return max1+max2;
}

Student::Student()
{
}
