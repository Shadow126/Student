#pragma once
class Point
{
private:
	float math, physical, chemistry;
public:
	Point();
	
	void setMath(float);
	float getMath();

	void setPhysical(float);
	float getPhysical();
	
	void setChemistry(float);
	float getChemistry();
	
	float getSum();
};

