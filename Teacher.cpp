#include "Teacher.h"

void Teacher::exam(Student s, bool retry)
{
	int currentMark = assignment(s, "Do this");

	if (retry && s.tryAgain(currentMark)) {
		currentMark = assignment(s, "Do this again");
	}

	s.changeMark(currentMark);
}

int Teacher::assignment(Student s, string work)
{
	return s.doAssignment(work);
}
