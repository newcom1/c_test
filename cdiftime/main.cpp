#include <iostream>
#include "Difftimer.h"

int main()
{
	Difftimer test(2, ture);
	test.start();
	test.istimeout();
	sleep(2);
	test.istimeout();
	test.istimeout();
	return 0;
}
