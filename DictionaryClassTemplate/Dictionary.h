#pragma once
#include "../../DynamicallyResizeable/DynamicallyResizeable/DynamicList.h"

template <typename j>
class Dictionary
{
public:
	Dictionary();
	DynamicList<const char*> words[10];
	DynamicList<j> values[10];
	int index;
	j contain;
	int value;
	void add(const char* s, int i);
	int lookUp(const char* x);
	void remove(const char* y);
	bool contains(const char* z);
};

template <typename j>
Dictionary<j>::Dictionary() {

}

template <typename j>
void Dictionary<j>::add(const char* s, int i) {
	words.push(s);
	values.push(i);
}

template <typename j>
int Dictionary<j>::lookUp(const char* x) {
	index = words.index(x);
	value = values.get(index);
	return value;
}

template <typename j>
void Dictionary<j>::remove(const char* y) {
	index = words.index(y);
	words.remove(index);
	values.remove(index);
}

template <typename j>
bool Dictionary<j>::contains(const char* z) {
	return words.contains(z);
}



