# ifndef _LINK_H
# define _LINK_H

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
		next = NULL;
	}
};

// Single Link
template<class T>
class Link {
public:
	LinkNode<T> *head;
	LinkNode<T> *tail;
	int length;
public:
	Link() {
		LinkNode<T> *temp = new LinkNode<T>();
		head = tail = temp;
		length = 0;
	}
	~Link() {
		LinkNode<T>* temp;
		while (head != NULL) {
			temp = head;
			head = head->next;
			delete temp;
		}
	}
	int getLen() {
		return length;
	}
	void insert(T v);
	LinkNode<T>* query(T v);
	void del(T v);
	void traverse() {
		LinkNode<T>*cur = head->next;
		//std::cout << "length:" << length << std::endl;
		while (cur != NULL) {
			std::cout << cur->value << " ";
			cur = cur->next;
		}
		std::cout << std::endl;
	}
};

template<class T>
void Link<T>::insert(T v) {
	LinkNode<T> * temp = new LinkNode<T>(v);
	if (temp != NULL) {
		tail->next = temp;
		tail = temp;
		length++;
	}
}

template<class T>
LinkNode<T>* Link<T>::query(T v) {
	LinkNode<T> * temp = head->next;
	while (temp != NULL) {
		if (temp->value == v) {
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}

template<class T>
void Link<T>::del(T v) {
	LinkNode<T> *pre = head;
	LinkNode<T> *cur = head->next;
	while (cur != NULL) {
		if (cur->value == v) {
			pre->next = cur->next;
			if (cur == tail) {
				tail = pre;
			}
			delete cur;
			length--;
			break;
		}
		cur = cur->next;
		pre = pre->next;
	}
}

/* 链表代码练习题
 * Leetcode: 206,141,21,19,876
 * Single Link Reverse
 * Detect circle in link
 * Merge two ordered link
 * Delete the n-th node in link
 * Get middle node of the link
 */

/* 如何优雅的写出链表代码：
 * 1 理解指针或引用的含义
 * 2 警惕指针丢失和内存泄漏
 * 3 利用哨兵简化实现难度
 * 4 重点留意边界条件处理
 * 5 举例画图，辅助思考
 * 6 多写多练，没有捷径
 */

# endif