#include "HRDepartment.h"


HRDepartment::HRDepartment(string n):Company(n)
{
}


HRDepartment::~HRDepartment(void)
{
}

//��Ӳ���
void HRDepartment::Add(Company* c)
{
	//
}

//�Ƴ�����
void HRDepartment::Remove(Company* c)
{
	//
}

//��ʾ����
void HRDepartment::Display(int depth)
{
	cout<<name<<"-"<<depth<<endl;
}

//����ְ��
void HRDepartment::LineOfDuty()
{
	cout<<name<<" Ա����Ƹ��ѵ����"<<endl;
}