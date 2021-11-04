#include "pch.h"
#include <iostream>
#include "Dictionary.h"
#include "Dictionary.cpp"

int main()
{
	Dictionary<int> dict;

	dict.add("hello", 0);
	dict.add("world", 42);

	printf("Value of \"hello\" is %d\n", dict.lookUp("hello")); // Should print 0
	printf("Value of \"world\" is %d\n", dict.lookUp("world")); // Should print 42

	dict.remove("hello");

	printf("Contains \"hello\"? %d\n", dict.contains("hello")); //Prints 0, i.e. false

	system("pause");
	return 0;

}