#include <unistd.h>
#include <stdlib.h>
#include <curses.h>
#include "./init_run.h"
#include "./snake.h"


int main() {
	initscr();

	init_disp();
	init_snake();
	run_snake();
	destroy_all();

	endwin();
	refresh();
	return 0;
}
