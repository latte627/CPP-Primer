/*
* File:    C++ Primer Exercise 2.3
* Author:  ZJH
* Date:    2024-07-29
* Description: ������д����������������ԭ�� .
* Knowledge Point: 
	�з��ź��޷���������ʱ���з�����Ϊǿ��ת��Ϊ�޷��������ڴ��ڼ���ܷ����������
���ӣ�-1ת��Ϊ255==>-1�Ķ����Ʊ�ʾΪ10000000�����룩  ���൱��������255��ʾ��
Ҳ����-1��256ȡģ��-1%256=-1^255.
*/

#include<iostream>

int main() {
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;//32
	std::cout << u - u2 << std::endl;//-32ȡģ��Ϊһ���ܴ����

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;//32
	std::cout << i - i2 << std::endl;//-32
	std::cout << i - u << std::endl;//0
	std::cout << u - i << std::endl;//0

	std::cout << (unsigned) - 1 % 256 << std::endl;//255

	return 0;
}
