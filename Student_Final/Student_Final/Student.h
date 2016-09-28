#pragma once
#include "Point.h"
#include<string>
using namespace std;
class Student{
private:
	string id, name, address, sex;
	Point point;
public:
	void setId(string);
	string getId();

	void setName(string);
	string getName();

	void setAddress(string);
	string getAddress();

	void setSex(string);
	string getSex();

	void setPoint(Point );
	Point getPoint();
	Student();
};

