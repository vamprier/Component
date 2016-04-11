#ifndef FINANCEDP_H
#define FINANCEDP_H


#include "company.h"

class FinanceDepartment : public Company
{
public:
	FinanceDepartment(string n);
	~FinanceDepartment(void);
public:
	//添加部门
	virtual void Add(Company* c);
	//移除部门
	virtual void Remove(Company* c);
	//显示部门
	virtual void Display(int depth);
	//旅行职责
	virtual void LineOfDuty();
};

#endif