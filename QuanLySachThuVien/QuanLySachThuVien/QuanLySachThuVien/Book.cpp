#include "Book.h"

Book::Book(string authorName, string bookName, string publicser, string status)
{
	this->authorName = authorName;
	this->bookName = bookName;
	this->publicser = publicser;
	this->status = status;


}

Book::~Book()
{
}

string Book::getAuthor()
{
	return this->authorName;
}

string Book::getBookName()
{
	return this->bookName;
}

string Book::getPublicser()
{
	return this->publicser;
}

string Book::getStatus()
{
	return this->status;
}

void Book::setAuthorName(string authorName)
{
	this->authorName = authorName;
}

void Book::setBookName(string bookName)
{
	this->bookName = bookName;
}

void Book::setPublicser(string publicserName)
{
	this->publicser = publicser;
}

void Book::setStatus(string status)
{

	string* pointStatus = &this->status;
	
	*pointStatus = status;


}
