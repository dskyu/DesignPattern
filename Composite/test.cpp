#include "Composite.h"

int main()
{
/*	Composite* p=new Composite("С��");
	p->Add(new Leaf("С��"));
	p->Add(new Leaf("С��"));

	Composite* p1 = new Composite("СС��");
	p1->Add(new Leaf("����"));

	p->Add(p1);
	p->Display(1);*/

	ConcreteCompany *p = new ConcreteCompany("�廪��ѧ");
	p->Add(new HrDepartment("�廪��ѧ�˲Ų�"));

	ConcreteCompany *p1 = new ConcreteCompany("��ѧϵ");
	p1->Add(new HrDepartment("��ѧϵ�˲Ų�"));

	ConcreteCompany *p2 = new ConcreteCompany("����ϵ");
	p2->Add(new HrDepartment("����ϵ�˲Ų�"));

	p->Add(p1);
	p->Add(p2);

	p->Display(1);
	p->LineOfDuty();




	system("pause");
	return 0;
}
