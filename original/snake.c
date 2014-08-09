/* Function: Init_Disp() 
 * Usage: init and display the interface 
 * Return: none 
 */  
void Init_Disp()  
{  
	char wall = ' ';  
	int i, j;  
	initscr();  
	cbreak();              //不接受esc和ctrl按键       /* put termial to CBREAK mode */  
	noecho(); //是否显示回显 
	curs_set(0);        //设置光标透明度 0-无形，1-终端特定模式，2-终端特有知名度格式    /* set cursor invisible */  

	/* display some message about title and wall */  
	attrset(A_NORMAL);      /* set NORMAL first */  
	attron(A_REVERSE);      /* turn on REVERSE to display the wall */  
	for(i = 0; i < LINES; i++)  
	{  
		mvaddch(i, LEFT_EDGE, wall);  
		mvaddch(i, RIGHT_EDGE, wall);  
	}  
	for(j = 0; j < COLS; j++)  
	{  
		mvaddch(0, j, '=');  
		mvaddch(TOP_ROW, j, wall);  
		mvaddch(BOT_ROW, j, wall);  
	}  
	attroff(A_REVERSE);     /* turn off REVERSE */  
	mvaddstr(1, 2, "Game: snake    version: 1.0    date: 2011/08/22");  
	mvaddstr(2, 2, "Author: Dream Fly   Blog: blog.csdn.net/jjzhoujun2010");  
	mvaddstr(3, 2, "Usage: Press 'f' to speed up, 's' to speed down,'q' to quit.");  
	mvaddstr(4, 2, "       Nagivation key controls snake moving.");  
	refresh();  
}  

/* Function: Food_Disp() 
 *  * Usage: display food position 
 *   * Return: none 
 *    */  
void Food_Disp()  
{  
	srand(time(0));  
	food.x_pos = rand() % (COLS - 2) + 1;  
	food.y_pos = rand() % (LINES - TOP_ROW - 2) + TOP_ROW + 1;  
	mvaddch(food.y_pos, food.x_pos, FOOD_SYMBOL);/* display the food */  
	refresh();  
}  

/* Function: DLL_Snake_Create() 
 *  * Usage: create double linked list, and display the snake first node 
 *   * Return: none 
 *    */  
void DLL_Snake_Create()  
{  
	Snake_Node *temp = (Snake_Node *)malloc(sizeof(Snake_Node));  
	head = (Snake_Node *)malloc(sizeof(Snake_Node));  
	tail = (Snake_Node *)malloc(sizeof(Snake_Node));  
	if(temp == NULL || head == NULL || tail == NULL)  
		perror("malloc");  
	temp->x_pos = 5;  
	temp->y_pos = 10;  
	head->prev =NULL;  
	tail->next = NULL;  
	head->next = temp;  
	temp->next = tail;  
	tail->prev = temp;  
	temp->prev = head;  
	mvaddch(temp->y_pos, temp->x_pos, SNAKE_SYMBOL);  
	refresh();  
}
