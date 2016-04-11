#include "FinanceDepartment.h"


FinanceDepartment::FinanceDepartment(string n):Company(n)
{
}


FinanceDepartment::~FinanceDepartment(void)
{
}

//添加部门
void FinanceDepartment::Add(Company* c)
{
	//
}

//移除部门
void FinanceDepartment::Remove(Company* c)
{
	//
}

//显示部门
void FinanceDepartment::Display(int depth)
{
	cout<<name<<"-"<<depth<<endl;
}

//旅行职责
void FinanceDepartment::LineOfDuty()
{
	cout<<name<<" 公司财务收支管理"<<endl;
}