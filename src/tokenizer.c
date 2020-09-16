#include <stdio.h>

#include "tokenizer.h"

int space_char(char c)
{
  if(c == '\t' || c == ' '){
    return 1;
  }
  else if(c == '\0'){
    return 0;
  }
  return 0;
  
}
int non_space_char(char c)
{
  if(c != '\t' || c != ' '){
    return 1;
  }
  else if(c == '\0'){
    return 0;
  }
  return 0;
}
char *word_start(char *str)
{
  int i;
  char *tmp;
  while(str[i] !='\0'){
    if(str[i+0] != ' ' || str[i+0] != '\t'){
      tmp = &str[i+0];
    }
    else if(str[i+0] == '\t' || str[i+0] == ' '){
      tmp = &str[i+1];
    }
    i++;
  }
  return tmp;
}
char *wor_terminator(char *word)
{
  int i;
  char *tmp;
  while(word[i] != '\0'){
    if(word[i-1] == ' '|| word[i-1] == '\t'){
      tmp = &word[i-1];
    }
    i++;
  }
  return tmp;
}
