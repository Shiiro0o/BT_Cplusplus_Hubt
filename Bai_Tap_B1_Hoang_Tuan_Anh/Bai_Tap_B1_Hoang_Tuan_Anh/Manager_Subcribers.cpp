#include "Manager_Subcribers.h"
#include <iostream>
using namespace std;
ManagerSubcribers::ManagerSubcribers()
{

}

void ManagerSubcribers::addMoreSubcriber()
{
	string result = "y";
	while (result == "y") {
		string username, phoneNumber; int fee;
		cout << "Moi nhap ho ten: "; cin >> username;
		cout << "Moi nhap Sdt: "; cin >> phoneNumber;
		cout << "Moi nhap vao cuoc Su dung: "; cin >> fee;
		listSubs.push_back(Subcriber(username, phoneNumber, fee));
		cout << "\nBan Muon tiep Tuc Nhap ? "; cin >> result;
	}
	
	showMaxFees();
}

void ManagerSubcribers::showMaxFees()
{
	int max = 0;
		for (Subcriber sub : listSubs) {
			if (sub.getFee() > max) {
				max = sub.getFee();
			};
	}
		for (Subcriber sub : listSubs) {
			if (sub.getFee() == max) {
				cout << sub.toString();
				cout << "\nfee: " << sub.getFee();
			};
		}

}

void ManagerSubcribers::showList()
{
	for (Subcriber ac : listSubs) {
		cout << ac.toString();
		cout << "\nfee: " << ac.getFee() << endl;
	}
}

