#include "FinanceDepartment.h"


FinanceDepartment::FinanceDepartment(string n):Company(n)
{
}


FinanceDepartment::~FinanceDepartment(void)
{
}

//��Ӳ���
void FinanceDepartment::Add(Company* c)
{
	//
}

//�Ƴ�����
void FinanceDepartment::Remove(Company* c)
{
	//
}

//��ʾ����
void FinanceDepartment::Display(int depth)
{
	cout<<name<<"-"<<depth<<endl;
}

//����ְ��
void FinanceDepartment::LineOfDuty()
{
	cout<<name<<" ��˾������֧����"<<endl;
}