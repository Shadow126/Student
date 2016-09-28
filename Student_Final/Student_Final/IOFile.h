#pragma once
#include "Student.h"

class IOFile
{
public:
	IOFile();
	void readFile(string);
	void writeFile(string, Student&);
};

