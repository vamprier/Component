#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Company
{
public:
	Company(string n);
	virtual ~Company(void);
public:
	//��Ӳ���
	virtual void Add(Company* c) = 0;
	//�Ƴ�����
	virtual void Remove(Company* c) = 0;
	//��ʾ����
	virtual void Display(int depth) = 0;
	//����ְ��
	virtual void LineOfDuty() = 0;
protected:
	string name;
};

#endif