/*
* File:    C++ Primer Exercise 1.23
* Author:  ZJH
* Date:    2024-07-27
* Description: ��д���򣬶�ȡ�������ۼ�¼����ͳ��ÿ��ISBN�м������ۼ�¼ .
* Knowledge Point: ���ʹ�� ������Sales_item �ض����ʹ�ã����ն��ϱ�������C++�ļ�.
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
			std::cout << "ISBN��Ϊ��" << book1.isbn() << "����ƽ������Ϊ��" << book1.avg_price()<< std::endl;
			std::cout << "ISBN��Ϊ��" << book1.isbn() << "�������ۼ�¼�У�" << num << " ����" << std::endl << std::endl;
			book1 = book2;
			num = 1;
		}
	}
	std::cout << "ISBN��Ϊ��" << book1.isbn() << "����ƽ������Ϊ��" << book1.avg_price() << std::endl;
	std::cout << "ISBN��Ϊ��" << book1.isbn() << "�������ۼ�¼�У�" << num << " ����" << std::endl << std::endl;
	return 0;
}
