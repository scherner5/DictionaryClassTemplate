#pragma once

template <class j>
class Dictionary
{
public:
	Dictionary();
	j* dictionary;
	j index;
	j contain;
	void add(const char* s, int i);
	int lookUp(const char* x);
	void remove(const char* y);
	bool contains(const char* z);
};

template <class j>
void Dictionary<j>::add(const char* s, int i) {
	
}

template <class j>
int Dictionary<j>::lookUp(const char* x) {
	index = 0;
	return index;
}

template <class j>
void Dictionary<j>::remove(const char* y) {

}

template <class j>
bool Dictionary<j>::contains(const char* z) {
	contain = false;
	return contain;
}



