#include "ConcreteCompany.h"


ConcreteCompany::ConcreteCompany(string n):Company(n)
{
}


ConcreteCompany::~ConcreteCompany(void)
{
}

//��Ӳ���
void ConcreteCompany::Add(Company* c)
{
	comVec.push_back(c);
}

//�Ƴ�����
void ConcreteCompany::Remove(Company* c)
{
	vector<Company*>::iterator it = comVec.begin();
	it = find(comVec.begin(),comVec.end(),c);
	if( it != comVec.end())
	{
		it = comVec.erase(it);
	}
}

//��ʾ����
void ConcreteCompany::Display(int depth)
{
	cout<<name<<"-"<<depth<<endl;
	vector<Company*>::iterator it = comVec.begin();
	for ( ; it != comVec.end();++it)
	{
		(*it)->Display(depth+2);
	}
}

//����ְ��
void ConcreteCompany::LineOfDuty()
{
	vector<Company*>::iterator it = comVec.begin();
	for ( ; it != comVec.end();++it)
	{
		(*it)->LineOfDuty();
	}
}