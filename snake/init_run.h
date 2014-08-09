// 	init_run.h

#ifndef _INIT_RUN_H_
#define _INIT_RUN_H_

void init_disp();
void init_snake();
void run_snake();
void destroy_all();


struct snake_node *head;
struct snake_node *tail;
struct snake_node *p_node;

#endif
