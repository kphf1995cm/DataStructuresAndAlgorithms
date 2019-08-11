# include <iostream>
# include "type.h"
# include "link.h"
# include "lru.h"
# include <vector>

int main() {
	LRU<int> lru(4);
	for (int i = 0; i < 6; i++) {
		lru.access(i);
		lru.output();
	}
	lru.access(3);
	lru.output();
	lru.access(4);
	lru.output();
	lru.access(0);
	lru.output();
	return 0;
}

