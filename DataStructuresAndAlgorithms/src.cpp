# include "type.h"
# include <iostream>

/*
* ����ѭ�����hello��ԭ��arr[4]��i�ĵ�ַһ����i����ֵΪ0
* �����漰������֪ʶ�㣺
* 1 �����оֲ������ķ�����ƣ��ֲ�����������ջ�У����ܴӵ�λ�����߸�λ��ַ��ʼ��ȡ���ڲ�ͬ������ʵ��
* 2 �ֽڶ��뷽ʽ��8λ����4λ
* 3 �Ƿ���Զ��������Խ�����,java������
* 4 �Ƿ�����ջ����������i��arr��λ��˭��ǰ��˭�ں�arr�ĵ�ַ�����ڸ�λ����linux��gccʹ��-fno-stack-protector����ʱ�����Թرն�ջ����
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
