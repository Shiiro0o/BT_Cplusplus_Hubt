#include "MangerBook.h"

const string HIRE = "DaMuon";

ManagerBook::ManagerBook()
{
}
ManagerBook::~ManagerBook()
{

}

void ManagerBook::insertBook()
{
	string authorName, bookName, publicser, status;
	string result = "y";
	while (result == "y")
	{
		cout << "Nhap vao ten tac gia: "; cin >> authorName;
		cout << "Nhap vao ten sach: "; cin >> bookName;
		cout << "Nhap vao ten nha xuat ban: "; cin >> publicser;
		cout << "Nhap vao trang thai sach: (ChuaChoMuon/DaMuon) "; cin >> status;
		Book book(authorName,bookName,publicser,status);
		listBook.push_back(book);
		cout << "Ban Co Muon Tiep Tuc y/n: "; cin >> result;
	}
	cout << "\n";
	cout << "Tong So Sach: " << listBook.size();
}

void ManagerBook::printHireBooks()
{
	int index = 0;
	cout << "\nNhung Quuyen Sach Da Duoc Muon: " << endl;
	for (Book book : listBook) {
		if (book.getStatus() == HIRE) {
			cout << "Ten Tac Gia: " << book.getAuthor() << endl;
			cout << "Ten Sach: " << book.getBookName() << endl;
			cout << "Nha Xuat Ban: " << book.getPublicser() << endl;
			cout << "Trang thai sach " << book.getStatus() << endl;
			index++;
		}
	}
	cout << "\nTong So Sach Da Duoc Muon: " << index;

}

void ManagerBook::printUnHireBooks()
{
	cout << "\nNhung Quyen Sach chua Duoc Muon: " << endl;
	int index = 0;
	for (Book book : listBook) {
		if (book.getStatus() != HIRE) {
			cout << "Ten Tac Gia: " << book.getAuthor() << endl;
			cout << "Ten Sach: " << book.getBookName() << endl;
			cout << "Nha Xuat Ban: " << book.getPublicser() << endl;
			cout << "Trang thai sach " << book.getStatus() << endl;
			index++;
		}
	}
	cout << "\nTong So Sach Chua Duoc Muon: " << index;
}

void ManagerBook::hireBook()
{
	list<Book> list2;
	string bookName;
	cout << "\nNhap Vao Ten Sach Can Muon: "; cin >> bookName;
	for (Book book : listBook) {
		if (book.getBookName() == bookName) {
			book.setStatus(HIRE);
			list2.push_back(book);
		}
		else {
			list2.push_back(book);
		}
	}
	listBook = list2;
}

void ManagerBook::giveBack()
{
}

void ManagerBook::showAll()
{
	for (Book book : listBook) {
		cout << "Ten Tac Gia: " << book.getAuthor() << endl;
		cout << "Ten Sach: " << book.getBookName() << endl;
		cout << "Nha Xuat Ban: " << book.getPublicser() << endl;
		cout << "Trang thai sach " << book.getStatus() << endl;
	}
}
