#include "StudentController.h"
#include "IOFile.h"
#include "Student.h"
#include "Point.h"
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
StudentController::StudentController()
{
}

void StudentController::statitics(Student &st) {
	float sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
	ifstream file("sinhvien.txt");
	string line;
	while (getline(file, line)) {
		//file >> st.getPoint().getMath();
		sum1++;
		if (st.getPoint().getSum() < 15) {
			sum2++;
		}
		else if ((st.getPoint().getSum() >= 15) && (st.getPoint().getSum() < 20)) {
			sum3++;
		}
		else if ((st.getPoint().getSum() >= 20) && (st.getPoint().getSum() < 25)) {
			sum4++;
		}
		else if (st.getPoint().getSum() >= 25) {
			sum5++;
		}
	}
	
	cout << "Tong so sinh vien: " << sum1 << endl;
	cout << "So sinh vien co diem <15: " << sum2 << endl;
	cout << "So sinh vien co diem >=15 && <20 : " << sum3 << endl;
	cout << "So sinh vien co diem >=25 : " << sum5 << endl;
}
