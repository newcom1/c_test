#ifndef _DIFFTIMER_H_
#define _DIFFTIMER_H_

#define false 0
#define ture 1

class Difftimer
{
	public:
		Difftimer(int timeout, bool loop);
		~Difftimer();

	public:
		bool istimeout();
		void start();
		void restart();

	private:
		int _timeout;
		bool _loop;
		time_t _start;
		time_t _now;
};
#endif

