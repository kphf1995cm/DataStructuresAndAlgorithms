#ifndef _TYPE_H
#define _TYPE_H

// Single LinkNode
template<class T>
class LinkNode {
public:
	T value;
	LinkNode * next;
public:
	LinkNode() {
		next = NULL;
	}
	LinkNode(T v) {
		value = v;
		next = NULL;
	}
	~LinkNode() {
		if (next != NULL)
			delete next;
	}
};

// Single Link
template<class T>
class Link {
private:
	LinkNode<T> *head;
	LinkNode<T> *tail;
	int length;
public:
	Link() {
		head = NULL;
		tail = NULL;
		length = 0;
	}
	~Link() {
		if (head != NULL)
			delete head;
		if (tail != NULL)
			delete tail;
	}
	int getLen() {
		return length;
	}
	void insert(T v);
	LinkNode<T>* query(T v);
	void del(T v);
};

void testVariableAllocating();

#endif



