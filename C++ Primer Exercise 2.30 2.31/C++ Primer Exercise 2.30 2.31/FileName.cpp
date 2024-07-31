/*
* File:    C++ Primer Exercise 2.30 
* Author:  ZJH
* Date:    2024-07-30
* Description: 对于下面这些语句，请说明对象被声明成了顶层const还是底层const .
* 
* Knowledge Point: 
	顶层const就是指普遍意义上的常量，即不可改变的量：
const int,const char,const double ,* const p都属于顶层const.
	底层const一般出现在指针和引用上,代表它们指向的对象是常量：
const int *p,const int &r.
*/

#include<iostream>

int main() {
	const int v2 = 0;//顶层const
	int v1 = v2;

	int* p1 = &v1, & r1 = v1;

	int i = 0;
	const int* p2 = &v2, * const p3 = &i, & r2 = v2;//第一个const为底层 第二个为顶层


	/*
	* File:    C++ Primer Exercise  2.31
	* Author:  ZJH
	* Date:    2024-07-30
	* Description: 假设已有上一个练习所做的那些声明，则下面的哪些语句是合法的？请说明
	顶层const和底层const在每个例子中有何体现.

	* Knowledge Point: 
		一个普通指针不可以指向一个常量，但是一个指向常量的变量可以指向一个变量
	因为底层const仅仅表示：无法通过该指针或引用改变它指向的对象的值。如果想通过
	指针或引用改变对象的值，可以在新定义一个普通指针或引用指向它，通过普通指针或
	引用改变对象的值.
	*/

	r1 = v2;//将v2赋值给r1,也就是v1
	//p1 = p2;  p2指向常量，p1不是指向常量的指针，不能赋值
	p2 = p1;//反过来可以赋值
	//p1 = p3;理由同上
	p2 = p3;//都是指向常量的指针，可以赋值
	return 0;
}
