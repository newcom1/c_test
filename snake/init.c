#include "./init_run.h"
#include "./snake.h"

void init_disp()
{
	char wall = ' ';
	int i, j;
	noecho();
	cbreak();
	curs_set(0);
	attrset(A_NORMAL);
	attron(A_REVERSE);
	
	for(i=TOP; i <= BOTTOM; i++)
	{
		mvaddch(i, LEFT, wall);
		mvaddch(i, RIGHT, wall);
	}

	for(i=LEFT; i <=RIGHT; i++)
	{
		mvaddch(0, i, '=');
		mvaddch(2, i, '=');
		mvaddch(TOP, i, wall);
		mvaddch(BOTTOM, i, wall);
	}

	attroff(A_REVERSE);
	mvaddstr(1, 2, "Game: snake    version: 1.0 ");
	refresh();
}




void init_snake()
{
	p_node = head;
	head = (struct snake_node *)malloc(sizeof(struct snake_node));
	tail = (struct snake_node *)malloc(sizeof(struct snake_node));
	memset(head, 0, sizeof(Node));
	memset(tail, 0, sizeof(Node));
	head->next = tail;
	tail->next = NULL;
	head->node.x = 40;
	head->node.y = 40;
	tail->node.x = 39;
	tail->node.y = 40;
	direction = 'd';
}
