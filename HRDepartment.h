#ifndef HEDEPARMENT_H
#define HEDEPARMENT_H


#include "company.h"

class HRDepartment : public Company
{
public:
	HRDepartment(string n);
	~HRDepartment(void);
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