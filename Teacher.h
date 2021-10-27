#pragma once
#include "Student.h"
class Teacher
{
public:
	// Performs exam with certain student with retry or not
	void exam(Student s, bool retry);
	// Gives assignment to certain student
	int assignment(Student s, string work);
};

