#ifndef __MY_ZEPHYR_LIBRARY_H__
#define __MY_ZEPHYR_LIBRARY_H__

#include <string>

class MyZephyrClass
{
	std::string m_Message;

public:
	explicit MyZephyrClass(std::string message);

	void printMessage();
};

#endif /* __MY_ZEPHYR_LIBRARY_H__ */
