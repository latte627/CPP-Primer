
/*
* File:    C++ Primer Exercise 1.22
* Author:  ZJH
* Date:    2024-07-27
* Description: 编写程序，读取多个具有相同ISBN的销售记录，输出所有记录的和.
* Knowledge Point: 类的使用 类名： Sales_item .
*
*/


#include<iostream>
#include"Sales_item.h"

int main() {
	Sales_item book;
	Sales_item sum;
	while (std::cin >> book) {
		sum += book;
	}
	std::cout << sum << std::endl;
	return 0;
}