#include "MyZephyrLibrary.h"

#include <string>
#include <cstdio>

void main()
{
	auto message = std::string("Hello There");

	auto myClass = MyZephyrClass(message);

	myClass.printMessage();

	printf("Done!\n");
}
