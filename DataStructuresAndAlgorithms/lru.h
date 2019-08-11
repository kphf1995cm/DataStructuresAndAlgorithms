# ifndef _LRU_H
# define _LRU_H

# include "link.h"

template<class T>
class LRU {
private:
	int bufferSize;
	Link<T> buffer;
public:
	LRU(int size) {
		bufferSize = size;
	}
	void access(T v);
	void output();
};

template<class T>
void LRU<T>::access(T v) {
	LinkNode<T>*pre = buffer.head;
	LinkNode<T>*cur = buffer.head->next;
	while (cur != NULL) {
		if (cur->value == v) {
			pre->next = cur->next;
			cur->next = buffer.head->next;
			buffer.head->next = cur;
			break;
		}
		pre = pre->next;
		cur = cur->next;
	}
	if (cur == NULL) {
		if (buffer.length < bufferSize) {
			buffer.length++;
		}
		else {
			LinkNode<T>*p = buffer.head;
			LinkNode<T>*c = buffer.head->next;
			while (c != NULL) {
				if (c->next == NULL) {
					p->next = NULL;
					delete c;
					break;
				}
				p = p->next;
				c = c->next;
			}
		}
		LinkNode<T>*temp = new LinkNode<T>(v);
		temp->next = buffer.head->next;
		buffer.head->next = temp;
	}
}

template<class T>
void LRU<T>::output() {
	std::cout << "bufferSize:" << bufferSize << std::endl;
	buffer.traverse();
}
# endif
