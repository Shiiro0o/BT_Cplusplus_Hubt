#pragma once
#include <iostream>
class Subcriber
{
private:
	std::string username, phoneNumber;
	int fee;
public:
	Subcriber(std::string username, std::string phoneNumber, int fee);
	std::string toString();
	int getFee();
};

