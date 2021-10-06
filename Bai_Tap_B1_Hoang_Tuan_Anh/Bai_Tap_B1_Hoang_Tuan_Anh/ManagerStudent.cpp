#include "ManagerStudent.h"

ManagerStudent::ManagerStudent()
{
}

void ManagerStudent::addMoreStudent()
{
	string result = "y";
	while (result == "y") {
		string id, name, dob;
		int math, phy, chem,mark1,mark2;
		cout << "Moi nhap id: "; cin >> id;
		cout << "Moi nhap ho ten: "; cin >> name;
		cout << "Moi nhap nam sinh: "; cin >> dob;
		cout << "Moi nhap diem Toan: "; cin >> math;
		cout << "Moi nhap diem Ly: "; cin >> phy;
		cout << "Moi Nhap Vao Diem Hoa: "; cin >> chem;
		cout << "Moi Nhap Diem Tong Ket Ki 1: "; cin >> mark1;
		cout << "Moi Nhap Diem Tong Ket Ki 2: "; cin >> mark2;
		mListStudent.push_back(Student(id,name,dob,math,phy,chem,mark1,mark2));
		cout << "\nBan Muon tiep Tuc Nhap y/n? "; cin >> result;
	}
	showStudentMaxPlusTwoSubject();
	showStudentPlusSubjectBiggerThenTwenty();
	showStudent();
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
	cout << stdent.toString() << endl;
	cout <<"Diem Toan: "<< stdent.getMath() <<endl;
	cout << "Diem Ly: " << stdent.getPhysic() << endl;
	cout << "Diem Hoa: " << stdent.getChemis() << endl;
	cout << "Diem Tong Ket Ky 1: " << stdent.getMarkI() << endl;
	cout << "Diem Tong Ket Ky 2: " << stdent.getMarkII() << endl;

}

void ManagerStudent::showStudentPlusSubjectBiggerThenTwenty()
{
	int max = 20;
	for (Student st : mListStudent) {
		if ((st.getChemis() + st.getMath() + st.getPhysic()) > max) {
			cout << st.toString()<< endl;
			cout << "Diem Toan: " << st.getMath() << endl;
			cout << "Diem Ly: " << st.getPhysic() << endl;
			cout << "Diem Hoa: " << st.getChemis() << endl;
			cout << "Diem Tong Ket Ky 1: " << st.getMarkI() << endl;
			cout << "Diem Tong Ket Ky 2: " << st.getMarkII() << endl;
		}
	}
}

void ManagerStudent::showStudent()
{
	cout << "Sinh vien Co Diem Trung Binh Ca nam >= 5: "<< endl;
	for (Student st : mListStudent) {
		if (st.getAverage() < 5) continue;
			cout << st.toString() << endl;
			cout << "Diem Toan: " << st.getMath() << endl;
			cout << "Diem Ly: " << st.getPhysic() << endl;
			cout << "Diem Hoa: " << st.getChemis() << endl;
			cout << "Diem Tong Ket Ky 1: " << st.getMarkI() << endl;
			cout << "Diem Tong Ket Ky 2: " << st.getMarkII() << endl;
		
	}
}
