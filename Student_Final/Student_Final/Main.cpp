#include<iostream>
#include "Student.h"
#include "Point.h"
#include "View.h"
#include "IOFile.h"
#include "StudentController.h"

using namespace std;

int main() {
	Student sv;
	View v;
	IOFile file;
	StudentController st;
	int choose;
	
	char confirm;
	do{
		v.Menu();
		cout << "Nhap lua chon: ";
		cin >> choose;
		cin.ignore();
		switch (choose) {
		case 1:
			v.student_Input(sv);
			file.writeFile("sinhvien.txt", sv);
			//v.student_Show();
			break;
		case 2:
			cout<< "\t"<< "ID"  << "\t" << "Ten " << "\t" << "Dia chi" << "\t" << "  Gioi tinh" << "\t" << "Toan" << "\t" << "Li" << "\t" << "Hoa" << "\t" << "Tong diem" << endl;
			v.student_Show();
			break;
		case 3:
		case 4:
			v.student_Show();
			break;
		default:
			cout << "Khong hop le" << endl;
			break;
		}
		cout << "Ban muon tiep tuc ('y' or 'Y'):" << endl;
		cin >> confirm;
	}while (confirm == 'y' || confirm == 'Y');
	//v.student_Input(sv);
	//file.writeFile("sinhvien.txt",sv);
	//v.student_Show(sv);
	//file.readFile("sinhvien.txt");
	//v.student_Show();
	//st.statitics(sv);
	//system("pause");
}