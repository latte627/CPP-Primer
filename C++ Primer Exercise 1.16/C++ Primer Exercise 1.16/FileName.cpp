/*
* File:    C++ Primer Exercise 1.16
* Author:  ZJH
* Date:    2024-07-27
* Description: ʹ��whileѭ����cinʵ�ֶ�ȡ�û���һ������
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
