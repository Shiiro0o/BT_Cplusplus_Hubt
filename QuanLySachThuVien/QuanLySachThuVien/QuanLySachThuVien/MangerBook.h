#pragma once
#include "Book.h"
#include <vector>
#include <list>
#include <iterator>
using namespace std;

class ManagerBook
{
public:
	ManagerBook();
	~ManagerBook();
	void insertBook();
	void printHireBooks();
	void printUnHireBooks();
	void hireBook();
	void giveBack();
	void showAll();

private:
	//list<Book> listBook;
	list<Book> listBook;
};


