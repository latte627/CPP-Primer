/*
* File:    C++ Primer Exercise 2.30 
* Author:  ZJH
* Date:    2024-07-30
* Description: ����������Щ��䣬��˵�������������˶���const���ǵײ�const .
* 
* Knowledge Point: 
	����const����ָ�ձ������ϵĳ����������ɸı������
const int,const char,const double ,* const p�����ڶ���const.
	�ײ�constһ�������ָ���������,��������ָ��Ķ����ǳ�����
const int *p,const int &r.
*/

#include<iostream>

int main() {
	const int v2 = 0;//����const
	int v1 = v2;

	int* p1 = &v1, & r1 = v1;

	int i = 0;
	const int* p2 = &v2, * const p3 = &i, & r2 = v2;//��һ��constΪ�ײ� �ڶ���Ϊ����


	/*
	* File:    C++ Primer Exercise  2.31
	* Author:  ZJH
	* Date:    2024-07-30
	* Description: ����������һ����ϰ��������Щ���������������Щ����ǺϷ��ģ���˵��
	����const�͵ײ�const��ÿ���������к�����.

	* Knowledge Point: 
		һ����ָͨ�벻����ָ��һ������������һ��ָ�����ı�������ָ��һ������
	��Ϊ�ײ�const������ʾ���޷�ͨ����ָ������øı���ָ��Ķ����ֵ�������ͨ��
	ָ������øı�����ֵ���������¶���һ����ָͨ�������ָ������ͨ����ָͨ���
	���øı�����ֵ.
	*/

	r1 = v2;//��v2��ֵ��r1,Ҳ����v1
	//p1 = p2;  p2ָ������p1����ָ������ָ�룬���ܸ�ֵ
	p2 = p1;//���������Ը�ֵ
	//p1 = p3;����ͬ��
	p2 = p3;//����ָ������ָ�룬���Ը�ֵ
	return 0;
}
