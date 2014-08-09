//list.c

#include <string.h>
#include <stdlib.h>

#include "list.h"

/* list_init */
void list_init(List *list, void (*destroy)(void *data)){
	//Initialize the list. */
	
	list->size = 0;
	list->destroy = destroy;
	list->head = NULL;
	list->tail = NULL;

	return;
}

/* list_destroy */
void list_destroy(List *list) {
	void *data;
	/* Remove each element. */
	while( list_size(list) > 0) {
		if(list_rem_next(list, NULL, (void **)&data) == 0 && list->destroy != NULL){
			list->destroy(data);
		}
	}
	/*No operations are allowed now, but clear the structure as a precaution. */
	memset(list, 0, sizeof(list));
	return;
}

/* list_ins_next */
int list_ins_next(List *list, ListElmt *element, const void *data){
	ListElmt *new_element;
	if((new_element = (ListElmt *)malloc(sizeof(ListElmt))) == NULL)
		return -1;
	new_element->data = (void *)data;
	
	if(element == NULL){
		/* Handle insertion at the head of the list */
		if(list_size(list) == 0){
			list->head = new_element;
			new_element->next = list->tail;
		}
		else{
			/* Handle insertion somewhere other than at the head. */
			new_element->next = element->next;
			element->next = new_element;
		}

		list->size++;
		return 0;
	}
}

/* list_rem_next */
int list_rem_next(List *list, ListElmt *element, void **data){
	ListElmt *old_element;
	if(list_size(list) == 0)	return -1;
	if(element == NULL){
		old_element = list->head;
		list->head = list->head->next;
		*data = old_element->data;
	}
	
	else {
		if(element->next == NULL)	return -1;
		old_element = element->next;
		element->next = old_element->next;
		*data = old_element->data;
		if(element->next == NULL)
			list->tail = element;
	}

	free(old_element);
	list->size--;
	
	return 0;
}
