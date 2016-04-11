#ifndef FINANCEDP_H
#define FINANCEDP_H


#include "company.h"

class FinanceDepartment : public Company
{
public:
	FinanceDepartment(string n);
	~FinanceDepartment(void);
public:
	//��Ӳ���
	virtual void Add(Company* c);
	//�Ƴ�����
	virtual void Remove(Company* c);
	//��ʾ����
	virtual void Display(int depth);
	//����ְ��
	virtual void LineOfDuty();
};

#endif