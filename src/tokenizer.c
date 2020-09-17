#include <stdio.h>

#include "tokenizer.h"

int space_char(char c)
{
  if(c == '\t' || c == ' '|| c != '\0'){
    return 1;
  }
  return 0;
  
}
int non_space_char(char c)
{
  if(c != '\t' || c != ' '|| c != '\0'){
    return 1;
  }
  return 0;
}
char *word_start(char *str)
{
  char *tmp = str;
  while(space_char(*tmp)!=1){
    if(non_space_char(tmp[0])==1){
      return tmp;
    }
    tmp++;
  }
  return str;
}
char *word_terminator(char *word)
{
  
  char *tmp = word;
  while(non_space_char(*tmp) ==1){
    if(non_space_char(tmp[0]) ==0){
      return tmp;
    }
    tmp++;
  }
  return word;
}
int count_words(char *str)
{
  int n;

  for (n = 0; *str !='\0' ; str++){
    n++;
  }
  return n;
}
