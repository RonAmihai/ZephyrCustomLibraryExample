#include "MyZephyrLibrary.h"
#include "libDep.h"

#include <zephyr.h>

MyZephyrClass::MyZephyrClass(std::string message) : m_Message(std::move(message))
{
	libDepFunc();
}

void MyZephyrClass::printMessage()
{
	printk("Message using zephyr: %s", m_Message.c_str());
}
