
/*
* File:    C++ Primer Exercise 1.22
* Author:  ZJH
* Date:    2024-07-27
* Description: ��д���򣬶�ȡ���������ͬISBN�����ۼ�¼��������м�¼�ĺ�.
* Knowledge Point: ���ʹ�� ������ Sales_item .
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