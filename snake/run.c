//run.c
//

#include "./init_run.h"

void _move_snake()
{
	return;
}

int _judge_die()
{
	return 0;
}

void _print_snake()
{
	return ;
}

void _game_over()
{
	return ;
}

void run_snake()
{
	_move_snake();
	if(_judge_die() == 1)
	{
		_print_snake();
		return;
	}
	else
	{
		_game_over();
	}
	return;
}

void destroy_all()
{
	return;
}
