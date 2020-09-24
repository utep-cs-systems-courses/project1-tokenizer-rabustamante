#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int space_char(char c)
{
  if(((0 != '\t') || (c == ' ')) && (c != '\0')){
    
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

  while(space_char(*str)){
      str++;
  }
  return str;
    
}
char *word_terminator(char *word)
{
  
  while (non_space_char(*word) !=0){
    
    word++;
      
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
char *copy_str(char *inStr, short len)
{
  char *ptCopy = (char*)malloc((len+1) * sizeof(char));
  int i= 0;

  for (i = 0 ; i < len; i++){

    ptCopy[i] = inStr[i];
  }
  ptCopy[len] = '\0';
  
  return ptCopy;
  }
char **tokenize(char* str)
{
  int countWords = count_words(str);
  char **tokens = (char**) malloc((countWords + 1) * sizeof(char*));

  int i =0;
  
  for(i = 0; i < countWords; i++){
    
    char  *wordStart = word_start(str);
    
    str= word_terminator(wordStart);
    
    tokens[i] = copy_str(wordStart, str - wordStart);
      
  }
  tokens[i] = 0;
  
  return tokens;
}
 
/* Prints all tokens. */
void print_tokens(char **tokens)
{
  int i;
  for(i = 0; *(tokens[i]) != '\0'; i++){
    
    printf("%s\n", tokens[i]);
    
  }

}
void free_tokens(char **tokens)
{
  int i = 0;
  for(i = 0; *(tokens[i]) != '\0'; i++){
    
    free(tokens[i]);

  }
  free(tokens);

} 
