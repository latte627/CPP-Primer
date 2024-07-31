/*
* File:    C++ Primer Exercise 2.35
* Author:  ZJH
* Date:    2024-07-30
* Description: 判断下列定义推断出的类型是什么，然后编写程序进行验证 .
*
* Knowledge Point:
	auto忽视顶层const，而保留底层const.
*/

#include<iostream>

int main() {
	const int i = 42;//整型
	auto j = i;//整型
	const auto& k = i;//绑定到整形常量
	auto* p = &i;//指向整型常量的指针
	const auto j2 = i, & k2 = i;//整型常量，绑定到整形常量

	//                                      k2判断错误，j2,k2在同一行，因此j2,k2类型一致

	std::cout << typeid(i).name() << std::endl;
	std::cout << typeid(j).name() << std::endl;
	std::cout << typeid(k).name() << std::endl;
	std::cout << typeid(p).name() << std::endl;
	std::cout << typeid(j2).name() << std::endl;
	std::cout << typeid(k2).name() << std::endl;
	return 0;
}
