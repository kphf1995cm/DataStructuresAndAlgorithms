# include "type.h"
# include <iostream>

void testVariableAllocating() {
	int i = 0;
	int arr[3];
	for (i; i <= 5; i++) {
		arr[i] = 0;
		std::cout << "hello" << std::endl;
	}
}
/*
 * ����ѭ�����hello��ԭ��arr[4]��i�ĵ�ַһ����i����ֵΪ0
 * �����漰������֪ʶ�㣺
 * 1 �����оֲ������ķ�����ƣ��ֲ�����������ջ�У����ܴӵ�λ�����߸�λ��ַ��ʼ��ȡ���ڲ�ͬ������ʵ��
 * 2 �ֽڶ��뷽ʽ��8λ����4λ
 * 3 �Ƿ���Զ��������Խ�����,java������
 * 4 �Ƿ�����ջ����������i��arr��λ��˭��ǰ��˭�ں�arr�ĵ�ַ�����ڸ�λ����linux��gccʹ��-fno-stack-protector����ʱ�����Թرն�ջ����
 */