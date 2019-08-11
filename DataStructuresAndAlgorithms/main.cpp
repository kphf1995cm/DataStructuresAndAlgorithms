# include <iostream>
# include "type.h"

int main() {
	//testVariableAllocating();
	Link<int> l;
	l.getLen();
	for (int i = 0; i < 10; i++) {
		l.insert(i);
	}
	return 0;
}