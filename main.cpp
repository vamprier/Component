// Component.cpp : 定义控制台应用程序的入口点。
//

#include "ConcreteCompany.h"
#include "FinanceDepartment.h"
#include "HRDepartment.h"

int main(int argc, char* argv[])
{
	Company* root = new ConcreteCompany("北京总公司");
	root->Add(new HRDepartment("总公司人力资源部"));
	root->Add(new FinanceDepartment("总公司财务部"));

	Company* shanghai = new ConcreteCompany("上海华东分公司");
	shanghai->Add(new HRDepartment("华东分公司人力资源部"));
	shanghai->Add(new FinanceDepartment("华东分公司财务部"));

	root->Add(shanghai);

	Company* nanjing = new ConcreteCompany("南京办事处");
	nanjing->Add(new HRDepartment("南京办事处人力资源部"));
	nanjing->Add(new FinanceDepartment("南京办事处财务部"));

	shanghai->Add(nanjing);

	Company* hangzhou = new ConcreteCompany("杭州办事处");
	hangzhou->Add(new HRDepartment("杭州办事处人力资源部"));
	hangzhou->Add(new FinanceDepartment("杭州办事处财务部"));

	shanghai->Add(hangzhou);

	cout<<"公司组织结构图："<<endl;
	root->Display(1);

	cout<<"各部门职责："<<endl;
	root->LineOfDuty();

	delete hangzhou;
	delete nanjing;
	delete shanghai;
	delete root;

	cin.ignore();

	return 0;
}

