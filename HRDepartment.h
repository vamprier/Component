#ifndef HEDEPARMENT_H
#define HEDEPARMENT_H


#include "company.h"

class HRDepartment : public Company
{
public:
	HRDepartment(string n);
	~HRDepartment(void);
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