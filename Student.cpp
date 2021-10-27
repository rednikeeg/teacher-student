#include "Student.h"

Student::Student()
{
	totalMark = 0;
}

Student::Student(int totalMark)
{
	// Validate input value
	if (totalMark < 0 || totalMark > 100) {
		throw "Unexpected value.";
	}

	this->totalMark = totalMark;
}

void Student::changeMark(int value)
{
	// Validating input value
	if (value < 0 || value > 5) {
		throw "Unexpected value.";
	}

	// totalMark max value is 100
	if (totalMark + value > 100) {
		totalMark = 100;
	}
	else {
		totalMark += value;
	}
}

int Student::getTotalMark()
{
	return totalMark;
}

int Student::doAssignment(string assignment)
{
	return 0 + rand() % 6;
}

bool Student::tryAgain(int mark)
{
	return mark < 4;
}
