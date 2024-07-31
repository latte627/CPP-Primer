/*
* File:    C++ Primer Exercise 1.21
* Author:  ZJH
* Date:    2024-07-27
* Description: 类的使用 类名：Sales_item
*/

#include<iostream>
#include"Sales_item.h"

int main() {
	Sales_item book1, book2;
	std::cin >> book1 >> book2;
	std::cout << book1 + book2 << std::endl;
	return 0;
}