/*
* File:    C++ Primer Exercise 1.23
* Author:  ZJH
* Date:    2024-07-27
* Description: 编写程序，读取多条销售记录，并统计每个ISBN有几条销售记录 .
* Knowledge Point: 类的使用 类名：Sales_item 重定向的使用，在终端上编译运行C++文件.
*/

#include<iostream>
#include"Sales_item.h"

int main() {
	Sales_item book1,book2;
	int num = 1;
	std::cin >> book1;
	while (std::cin >> book2) {
		if (book1.isbn() == book2.isbn()) {
			book1+=book2;
			num++;
		}
		else {
			std::cout << "ISBN号为：" << book1.isbn() << "的书平均销量为：" << book1.avg_price()<< std::endl;
			std::cout << "ISBN号为：" << book1.isbn() << "的书销售记录有：" << num << " 条。" << std::endl << std::endl;
			book1 = book2;
			num = 1;
		}
	}
	std::cout << "ISBN号为：" << book1.isbn() << "的书平均销量为：" << book1.avg_price() << std::endl;
	std::cout << "ISBN号为：" << book1.isbn() << "的书销售记录有：" << num << " 条。" << std::endl << std::endl;
	return 0;
}
