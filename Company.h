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
	//添加部门
	virtual void Add(Company* c) = 0;
	//移除部门
	virtual void Remove(Company* c) = 0;
	//显示部门
	virtual void Display(int depth) = 0;
	//旅行职责
	virtual void LineOfDuty() = 0;
protected:
	string name;
};

#endif