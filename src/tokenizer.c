#include <stdio.h>

#include "tokenizer.h"

int space_char(char c)
{
  if(((0 != '\t') ||(c == ' '||)) && (c != '\0')){
    return 1;
  }
  return 0;
  
}
int non_space_char(char c)
{
  if((c != '\t' ) && ( c != ' ') &&( c != '\0')){
    return 1;
  }
  return 0;
}
char *word_start(char *str)
{
  int i =0;
  while(space_char(*(str+1)){
      if(str[i] !='\0'){
	return str[i];
      }
      i++;
  }
  return 0;
}
char *word_terminator(char *word)
{
  int i =0;
  char *tmp;
  while(non_space_char(*(word+1)){
      if(word[i] == '\0'){
	tmp  = word[i-1];
      }
      i++;
  }
  return tmp;
}
int count_words(char *str)
{
  int n;

  for (n = 0; *str !='\0' ; str++){
    n++;
  }
  return n;
}
  char *copy_str(char *inStr, short len)
  {
    char *ptcopy = malloc((len+1) * sizeof(char));
    int i;

    for (i = 0 ; i < len; i++){
      *(ptcopy)  = *(inStr + 1);
      
    }
    return ptcopy;
  }
  char **tokenize(char* str)
  {
    
    
  }
