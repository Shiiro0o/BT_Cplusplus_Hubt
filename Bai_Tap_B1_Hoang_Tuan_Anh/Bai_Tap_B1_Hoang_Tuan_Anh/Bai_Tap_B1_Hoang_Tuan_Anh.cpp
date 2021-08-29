
#include <iostream>
#include "ManagerStudent.h"
#include "Manager_Subcribers.h"
using namespace std;
int main()
{
	
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


