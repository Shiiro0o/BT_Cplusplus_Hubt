#include "ManagerStudent.h"

ManagerStudent::ManagerStudent()
{
}

void ManagerStudent::addMoreStudent()
{
	string result = "y";
	while (result == "y") {
		string id, name, dob;
		int math, phy, chem;
		cout << "Moi nhap id: "; cin >> id;
		cout << "Moi nhap ho ten: "; cin >> name;
		cout << "Moi nhap nam sinh: "; cin >> dob;
		cout << "Moi nhap diem Toan: "; cin >> math;
		cout << "Moi nhap diem Ly: "; cin >> phy;
		cout << "Moi Nhap Vao Diem Hoa: "; cin >> chem;
		mListStudent.push_back(Student(id,name,dob,math,phy,chem));
		cout << "\nBan Muon tiep Tuc Nhap ? "; cin >> result;
	}
	showStudentMaxPlusTwoSubject();
	showStudentPlusSubjectBiggerThenTwenty();
}

void ManagerStudent::showStudentMaxPlusTwoSubject()
{
	int max = 0;
	Student stdent;
	for (Student st : mListStudent) {
		if (st.getMaxPlusTwoSubj() > max) {
			stdent = st;
		}
	}
	cout << stdent.toString();
	cout <<"Diem Toan: "<< stdent.getMath() <<endl;
	cout << "Diem Ly: " << stdent.getPhysic() << endl;
	cout << "Diem Hoa: " << stdent.getChemis() << endl;

}

void ManagerStudent::showStudentPlusSubjectBiggerThenTwenty()
{
	int max = 20;
	for (Student st : mListStudent) {
		if ((st.getChemis() + st.getMath() + st.getPhysic()) > max) {
			cout << st.toString();
			cout << "Diem Toan: " << st.getMath() << endl;
			cout << "Diem Ly: " << st.getPhysic() << endl;
			cout << "Diem Hoa: " << st.getChemis() << endl;
		}
	}
}
