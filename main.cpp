// Component.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "ConcreteCompany.h"
#include "FinanceDepartment.h"
#include "HRDepartment.h"

int main(int argc, char* argv[])
{
	Company* root = new ConcreteCompany("�����ܹ�˾");
	root->Add(new HRDepartment("�ܹ�˾������Դ��"));
	root->Add(new FinanceDepartment("�ܹ�˾����"));

	Company* shanghai = new ConcreteCompany("�Ϻ������ֹ�˾");
	shanghai->Add(new HRDepartment("�����ֹ�˾������Դ��"));
	shanghai->Add(new FinanceDepartment("�����ֹ�˾����"));

	root->Add(shanghai);

	Company* nanjing = new ConcreteCompany("�Ͼ����´�");
	nanjing->Add(new HRDepartment("�Ͼ����´�������Դ��"));
	nanjing->Add(new FinanceDepartment("�Ͼ����´�����"));

	shanghai->Add(nanjing);

	Company* hangzhou = new ConcreteCompany("���ݰ��´�");
	hangzhou->Add(new HRDepartment("���ݰ��´�������Դ��"));
	hangzhou->Add(new FinanceDepartment("���ݰ��´�����"));

	shanghai->Add(hangzhou);

	cout<<"��˾��֯�ṹͼ��"<<endl;
	root->Display(1);

	cout<<"������ְ��"<<endl;
	root->LineOfDuty();

	delete hangzhou;
	delete nanjing;
	delete shanghai;
	delete root;

	cin.ignore();

	return 0;
}

