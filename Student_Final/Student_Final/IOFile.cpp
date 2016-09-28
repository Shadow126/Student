#include "IOFile.h"
#include "Student.h"
#include<fstream>
#include<iostream>
using namespace std;

IOFile::IOFile()
{
}

void IOFile::readFile(string path) {
	fstream file(path, ios::in | ios::app);
	string data;
	string line;
	while (!file.eof()) {
		getline(file, line);
		data = data + line + "\n";
	}
	cout << data << endl;//in tu file ra man hinh
	file.close();
}
void IOFile::writeFile(string path, Student &student) {
	ofstream file(path, ios::out | ios::app);
	if (!file) {
		cout << "File khong ton tai" << endl;
	}
	else {
		file << "\t" << student.getId() << "\t" << student.getName() << "\t" << student.getAddress() << "\t   " << student.getSex()<<
			"\t\t" << student.getPoint().getMath() << "\t" << student.getPoint().getPhysical() << "\t" << student.getPoint().getChemistry()
			<<"\t"<< student.getPoint().getSum()<<"\n";
	}
	file.close();
}