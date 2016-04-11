#include "HRDepartment.h"


HRDepartment::HRDepartment(string n):Company(n)
{
}


HRDepartment::~HRDepartment(void)
{
}

//添加部门
void HRDepartment::Add(Company* c)
{
	//
}

//移除部门
void HRDepartment::Remove(Company* c)
{
	//
}

//显示部门
void HRDepartment::Display(int depth)
{
	cout<<name<<"-"<<depth<<endl;
}

//旅行职责
void HRDepartment::LineOfDuty()
{
	cout<<name<<" 员工招聘培训管理"<<endl;
}