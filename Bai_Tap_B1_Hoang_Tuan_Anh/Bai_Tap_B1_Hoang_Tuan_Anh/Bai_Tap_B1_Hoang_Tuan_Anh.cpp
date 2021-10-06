
#include <iostream>
#include "ManagerStudent.h"
#include "Manager_Subcribers.h"
using namespace std;
int main()
{
	cout << "Moi Nhap Bai Tap Can Xem: " << endl;
	cout << "1 Dang ky su dung dien: " << endl;
	cout << "2 Quan ly Hoc Sinh: " << endl;
	int result;
	cin >> result;
	if (result == 1) {
		ManagerSubcribers mng;
		mng.addMoreSubcriber();
	}
	else if(result == 2) {
		ManagerStudent std;
		std.addMoreStudent();
	}
}


