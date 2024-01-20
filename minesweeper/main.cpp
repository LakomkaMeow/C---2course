#include <iostream>
#include "Field.h"

int main()
{
	Field f = Field(20, 20);
	f.inputCoords(5, 7);
	f.PrintField();
	return 0;
}