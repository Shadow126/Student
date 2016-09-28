#include "View.h"
#include "Student.h"
#include "Point.h"
#include "IOFile.h"
#include<iostream>
#include<string>
using namespace std;


View::View( )
{
}
void View::Menu() {
	cout << "====================================================" << endl;
	cout << "1. Them thong tin sinh vien" << endl;
	cout << "2. Hien thi thong tin sinh vien" << endl;
	cout << "===================================================" << endl;
}
void View::student_Input(Student &sv) {
	string id, name, address, sex;
	float math, physical, chemistry;
	Point point;
	fflush(stdin);
	cout << "Nhap id: ";
	getline(cin, id);
	sv.setId(id);
	fflush(stdin);
	

	cout << "Nhap ten: ";
	fflush(stdin);
	getline(cin, name);
	sv.setName(name);

	cout << "Nhap dia chi: ";
	fflush(stdin);
	getline(cin, address);
	sv.setAddress(address);

	cout << "Nhap gioi tinh: ";
	fflush(stdin);
	getline(cin, sex);
	sv.setSex(sex);

	cout << "Nhap diem toan: ";
	cin >> math;
	point.setMath(math);
	cin.ignore();
	cout << "Nhap diem li: ";
	fflush(stdin);
	cin >> physical;
	point.setPhysical(physical);
	cout << "Nhap diem hoa: ";
	fflush(stdin);
	cin >> chemistry;
	point.setChemistry(chemistry);
	sv.setPoint(point);
}

void View::student_Show() {
	IOFile file;
	string path;
	file.readFile("sinhvien.txt");
}