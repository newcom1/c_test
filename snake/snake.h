#ifndef _SNAKE_H_
#define _SNAKE_H_
// 	snake.h

#include "./init_run.h"
#include <curses.h>
#include <stdlib.h>
#define TOP 1
#define BOTTOM 30
#define RIGHT 80
#define LEFT 0

char direction;
typedef struct food 
{
	int x;
	int y;
}Food;

typedef struct snake_node
{
	Food node;
	struct snake_node *pre;
	struct snake_node *next;
}Node;



#endif
