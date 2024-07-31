/*
* File:    C++ Primer Exercise 2.3
* Author:  ZJH
* Date:    2024-07-29
* Description: 读程序写结果，并检查程序错误原因 .
* Knowledge Point: 
	有符号和无符号数运算时，有符号数为强制转换为无符号数，在此期间可能发生数据溢出
例子：-1转换为255==>-1的二进制表示为10000000（补码）  就相当于正数的255表示，
也代表-1对256取模，-1%256=-1^255.
*/

#include<iostream>

int main() {
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;//32
	std::cout << u - u2 << std::endl;//-32取模后为一个很大的数

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;//32
	std::cout << i - i2 << std::endl;//-32
	std::cout << i - u << std::endl;//0
	std::cout << u - i << std::endl;//0

	std::cout << (unsigned) - 1 % 256 << std::endl;//255

	return 0;
}
