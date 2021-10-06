#pragma once
#include <iostream>
using namespace std;
class Book
{
public:
	Book(string authorName,string bookName,string publicser, string status);
	~Book();
	string getAuthor();
	string getBookName();
	string getPublicser();
	string getStatus();
	void setAuthorName(string authorName);
	void setBookName(string bookName);
	void setPublicser(string publicserName);
	void setStatus(string status);

private:
	string authorName, bookName, publicser, status;

		
};

