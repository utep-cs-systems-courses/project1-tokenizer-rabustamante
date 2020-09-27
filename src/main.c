#include <stdio.h>

#include <stdlib.h>

#include "tokenizer.h"

#include "history.h"



void tokenHisory(List *history, char **tokens);



int main()

{

  char input[1000];

  List *history = init_history();



  while (1) {

    printf("\nPlease make a selection:\n");

    printf(" 'q' to quit\n 'a' to input a sentence\n'!' followed by number to recall a nth history.\n'h' to print all histories\n");

    printf("$");

    fgets(input, 1000, stdin);


    /* option to quit*/
    if (input[0] == 'q') { 

      printf("Bye, thank you!\n");

      free_history(history);

      return 0;

   }
     /* Option to input a sentence*/
    else if (input[0] == 'a') {

      printf("Please input your sentence:\n$");

      fgets(input, 1000, stdin);

      char **tokens = tokenize(input);

      print_tokens(tokens);

      add_history(history, input);

      free_tokens(tokens);

    }

    /* Option to print nth history*/
    else if (input[0] == '!') {

      char *getHist = get_history(history,atoi(input+1));

      char **tokens = tokenize(getHist);

      printf("Retrieved history: %s\n", getHist);

      printf("Retrieved tokenized history:\n");

      print_tokens(tokens);

      free_tokens(tokens);

    }
    /* Option to print all histories*/
    else if (input[0] == 'h') {


      print_history(history);

    }
   
    else { // Invalid option

      printf("Invalid Selection, please try again!\n");

    }

  }

}
