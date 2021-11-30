#pragma once
#include "../../DynamicallyResizeable/DynamicallyResizeable/DynamicList.h"

template <typename j>
class Dictionary
{
public:
	Dictionary();
	DynamicList<const char*> words[26];
	DynamicList<j> values[26];
	int index;
	j contain;
	int value;
	int getBucket(const char* k);
	void add(const char* s, int i);
	int lookUp(const char* x);
	void remove(const char* y);
	bool contains(const char* z);
};

template <typename j>
Dictionary<j>::Dictionary() {

}

template <typename j>
int Dictionary<j>::getBucket(const char* k) {
	const char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char firstLetter = k[0];
	int arrayIndex = 0;
	for (int i = 0; i < sizeof(alphabet); i++) {
		if (firstLetter == alphabet[i]) {
			arrayIndex = i;
		}
	}
	return arrayIndex;
}

template <typename j>
void Dictionary<j>::add(const char* s, int i) {
	int bucketnum = getBucket(s);
	words[bucketnum].push(s);
	values[bucketnum].push(i);
}

template <typename j>
int Dictionary<j>::lookUp(const char* x) {
	int bucketnum = getBucket(x);
	index = words[bucketnum].index(x);
	value = values[bucketnum].get(index);
	return value;
}

template <typename j>
void Dictionary<j>::remove(const char* y) {
	int bucketnum = getBucket(y);
	index = words[bucketnum].index(y);
	words[bucketnum].remove(index);
	values[bucketnum].remove(index);
}

template <typename j>
bool Dictionary<j>::contains(const char* z) {
	int bucketnum = getBucket(z);
	return words[bucketnum].contains(z);
}



