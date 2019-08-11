# include "type.h"
# include <iostream>

/*
* 出现循环输出hello的原因：arr[4]与i的地址一样，i被赋值为0
* 这里涉及到几个知识点：
* 1 函数中局部变量的分配机制：局部变量分配在栈中，可能从低位、或者高位地址开始，取决于不同编译器实现
* 2 字节对齐方式：8位或者4位
* 3 是否可以对数组进行越界访问,java不可以
* 4 是否开启堆栈保护（不管i和arr的位置谁在前，谁在后，arr的地址都处于高位）：linux下gcc使用-fno-stack-protector参数时，可以关闭堆栈保护
*/
void testVariableAllocating() {
	int i = 0;
	int arr[3];
	for (i; i <= 5; i++) {
		arr[i] = 0;
		std::cout << "hello" << std::endl;
	}
}

template<class T>
void Link<T>::insert(T v) {
	LinkNode<T> * temp = new LinkNode<T>(v);
	if (temp != NULL) {
		if (tail != NULL) {
			tail->next = temp;
			tail = temp;
		}
		else {
			head = tail = temp;
		}
		length++;
	}
}

template<class T>
LinkNode<T>* Link<T>::query(T v) {
	LinkNode<T> * temp=head;
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

}
