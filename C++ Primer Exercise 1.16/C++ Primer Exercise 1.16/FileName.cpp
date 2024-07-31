/*
* File:    C++ Primer Exercise 1.16
* Author:  ZJH
* Date:    2024-07-27
* Description: 使用while循环和cin实现读取用户的一组数据
*/

#include<iostream>

int main() {
	int v = 0;
	int sum = 0;
	while (std::cin >> v) {
		sum += v;
	}

	std::cout << sum << std::endl;
	return 0;
}
