#pragma once
#include "Student.h"
class StudentController
{
public:
	StudentController();
	void add_student();
	void delete_student();
	void edit_student();
	void search_student();
	void sort_student();
	void statitics(Student &);
};

