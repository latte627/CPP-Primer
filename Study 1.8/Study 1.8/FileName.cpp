/*
* File:    C++ Primer Exercise 1.8
* Author:  ZJH
* Date:    2024-07-26
* Description: 注释符号'/*'的应用 .
* 注释中可以写 前注释符号
* 但不能写 后注释符号
* 因此注释符号无法嵌套
*/

#include<iostream>

int main() {
	std::cout << "/*" << std::endl;;
	std::cout << "*/" << std::endl;;

	//std::cout<</*"*/"*/;
	std::cout <</*"*/"/*"/*"*/ << std::endl;;
	return 0;
}

/*
* 
ssssss

*/