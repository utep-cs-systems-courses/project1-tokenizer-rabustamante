#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

List *int_history()
{
  List *list = malloc(sizeof(List));
  list->root = malloc(sizeof(item));

  return list
}
void add_history(List *list, char *str)
{
  int id = 1;

  Item *tmp  = list->root;

  while (tmp->next !=0){
    tmp = tmp->next;
    id++;
  }
  tmp->next = (Item*)malloc(sizeof(Item));
  tmp->next->next = 0;
  tmp->next->sr = str;
  tmp->next->id = id;
}
char *get_history(List *list, int id)
{  
  Item *tmp = list->root->next;
  
  while(temp->next !=0){
    if(tmp->id ==id){
      rturn tmp->str;

    }
    tmp = tmp->next;
  }
  
}
void print_history(List *list){
  Item *tmp = list->root->next;
  while(tmp !=0){
    printf("%d,%s\n", tmp->id, tmp->str);
    tmp = tmp->next;
  }
}
void free_history(List *list)
{
  Item *tmp = list->root->next;
  list->root->next =0;

  Item *prev = tmp;
  tmp = tmp->next;
  while(tmp !=0){
    if(tmp ==0){
      return;
    }
    free(prev->str);
    free(prev);
    prev = tmp;
    tmp = tmp->next;
  }

  free(prev->str);
  free(prev);
}
