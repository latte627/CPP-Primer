/*
* File:    C++ Primer Exercise 2.35
* Author:  ZJH
* Date:    2024-07-30
* Description: �ж����ж����ƶϳ���������ʲô��Ȼ���д���������֤ .
*
* Knowledge Point:
	auto���Ӷ���const���������ײ�const.
*/

#include<iostream>

int main() {
	const int i = 42;//����
	auto j = i;//����
	const auto& k = i;//�󶨵����γ���
	auto* p = &i;//ָ�����ͳ�����ָ��
	const auto j2 = i, & k2 = i;//���ͳ������󶨵����γ���

	//                                      k2�жϴ���j2,k2��ͬһ�У����j2,k2����һ��

	std::cout << typeid(i).name() << std::endl;
	std::cout << typeid(j).name() << std::endl;
	std::cout << typeid(k).name() << std::endl;
	std::cout << typeid(p).name() << std::endl;
	std::cout << typeid(j2).name() << std::endl;
	std::cout << typeid(k2).name() << std::endl;
	return 0;
}
