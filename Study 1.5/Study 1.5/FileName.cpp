#include<iostream>

/*
* File:    C++ Primer Exercise 1.5
* Author:  ZJH
* Date:    2024-07-26
* Description: C++输入输出的使用 .
*/



int main() {
	std::cout << "请输入两个数";
	std::cout << std::endl;
	int v1, v2;

	std::cin >> v1 >> v2;
	std::cout << v1 << '*' << v2 << "的积为" << v1 * v2 << std::endl;
	return 0;
 }