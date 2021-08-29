#include "Subscriber.h"
Subcriber::Subcriber(std::string username, std::string phoneNumber, int fee)
{
	this->username = username;
	this->phoneNumber = phoneNumber;
	this->fee = fee;
}

std::string Subcriber::toString()
{
	return "Username: " + this->username
		+ "\nPhone Number: " + this->phoneNumber ;

}

int Subcriber::getFee()
{
	return this->fee;
}
