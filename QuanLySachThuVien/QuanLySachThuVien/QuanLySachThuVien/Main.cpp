#include <iostream>
#include "MangerBook.h"
using namespace std;
void main() {
	ManagerBook mngBook;
	mngBook.insertBook();
	//mngBook.printHireBooks();
	//mngBook.printUnHireBooks();
	mngBook.hireBook();
	mngBook.printHireBooks();
	mngBook.printUnHireBooks();


 }