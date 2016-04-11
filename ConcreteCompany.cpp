#include "ConcreteCompany.h"


ConcreteCompany::ConcreteCompany(string n):Company(n)
{
}


ConcreteCompany::~ConcreteCompany(void)
{
}

//添加部门
void ConcreteCompany::Add(Company* c)
{
	comVec.push_back(c);
}

//移除部门
void ConcreteCompany::Remove(Company* c)
{
	vector<Company*>::iterator it = comVec.begin();
	it = find(comVec.begin(),comVec.end(),c);
	if( it != comVec.end())
	{
		it = comVec.erase(it);
	}
}

//显示部门
void ConcreteCompany::Display(int depth)
{
	cout<<name<<"-"<<depth<<endl;
	vector<Company*>::iterator it = comVec.begin();
	for ( ; it != comVec.end();++it)
	{
		(*it)->Display(depth+2);
	}
}

//旅行职责
void ConcreteCompany::LineOfDuty()
{
	vector<Company*>::iterator it = comVec.begin();
	for ( ; it != comVec.end();++it)
	{
		(*it)->LineOfDuty();
	}
}