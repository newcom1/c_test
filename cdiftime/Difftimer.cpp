#include <iostream>
using namespace std;
#include "Difftimer.h"

Difftimer::Difftimer(int timeout, bool loop): _timeout(timeout), _loop(loop)
{
	cout << "Create class Difftimer\n";
}

Difftimer::~Difftimer()
{
	cout << "Destroy class Difftimer!\n";
}

void Difftimer::start()
{
	time(&_start);
	return;
}

void Difftimer::restart()
{
	start();
	return;
}

bool Difftimer::istimeout()
{
	bool timeisout = false;
	time(&_now);
	if((int)difftime(_now, _start) >= _timeout)
	{
		timeisout = true;
		cout << "time is out\n";
	}
	else
	{
		cout << "time isn`t out\n";
	}
	if(_loop == true)	restart();
	return timeisout;
}
