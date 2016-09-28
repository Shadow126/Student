#include "Point.h"



Point::Point(){
	
}
void Point::setMath(float MATH) {
	math = MATH;
}
float Point::getMath() {
	return math;
}
void Point::setPhysical(float PHYSICAL) {
	physical = PHYSICAL;
}
float Point::getPhysical(){
	return physical;
}
void Point::setChemistry(float CHEMISTRY) {
	chemistry = CHEMISTRY;
}
float Point::getChemistry() {
	return chemistry;
}
float Point::getSum() {
	return (math + physical + chemistry);
}
