#include "Student.h"
#include "Point.h"


Student::Student(){
	
}
void Student::setId(string ID) {
	id = ID;
}
string Student::getId() {
	return id;
}
void Student::setName(string NAME) {
	name = NAME;
}
string Student::getName() {
	return name;
}
void Student::setAddress(string ADDRESS) {
	address = ADDRESS;
}
string Student::getAddress() {
	return address;
}
void Student::setSex(string SEX) {
	sex = SEX;
}
string Student::getSex() {
	return sex;
}

void Student::setPoint(Point POINT) {
	point = POINT;
}
Point Student::getPoint() {
	return point;
}
