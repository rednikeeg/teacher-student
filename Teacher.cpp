#include "Teacher.h"

void Teacher::exam(Student s, bool retry)
{
	int currentMark = assignment(s);

	if (retry && s.tryAgain(currentMark)) {
		currentMark = s.doAssignment("Do this again");
	}

	s.changeMark(currentMark);
}

int Teacher::assignment(Student s)
{
	return s.doAssignment("Do this");
}
