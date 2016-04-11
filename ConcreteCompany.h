#ifndef CONCRETECOMPANY_H
#define CONCRETECOMPANY_H


#include "company.h"

class ConcreteCompany : public Company
{
public:
	ConcreteCompany(string n);
	~ConcreteCompany(void);
public:
	//添加部门
	virtual void Add(Company* c);
	//移除部门
	virtual void Remove(Company* c);
	//显示部门
	virtual void Display(int depth);
	//旅行职责
	virtual void LineOfDuty();
private:
	vector<Company*> comVec;
};

#endif