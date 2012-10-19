#include "Template.h"

int main()
{
	AbstractClass* man = new Naruto();
	man->Show();

	AbstractClass* man2 = new OnePice();
	man2->Show();
	system("pause");
	return 0;
}
