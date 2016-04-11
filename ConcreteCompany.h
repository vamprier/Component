#ifndef CONCRETECOMPANY_H
#define CONCRETECOMPANY_H


#include "company.h"

class ConcreteCompany : public Company
{
public:
	ConcreteCompany(string n);
	~ConcreteCompany(void);
public:
	//��Ӳ���
	virtual void Add(Company* c);
	//�Ƴ�����
	virtual void Remove(Company* c);
	//��ʾ����
	virtual void Display(int depth);
	//����ְ��
	virtual void LineOfDuty();
private:
	vector<Company*> comVec;
};

#endif