/*
 Program prints a histogram of lengths of words in it's input. The histogram is drawn horizontally and vertically.
 */

#include <stdio.h>

#define MAX_WORD_LENGTH 100

int main() {
  int c, i, j;
  int word_length = 0;
  int lengths[MAX_WORD_LENGTH] = {0};

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (word_length > 0 && word_length < MAX_WORD_LENGTH) {
        lengths[word_length]++;
      }  
      word_length = 0;
    } else {
        word_length++;
      }
  }

  printf("\nA Horizontal Histogram:\n");
  for(i = 1; i < MAX_WORD_LENGTH; i++) {
    if(lengths[i] > 0) {
      printf("%2d: ", i);
      for (j = 0; j < lengths[i]; j++) {
        printf("*");
      }
      printf("\n");  
    }
  }
  
  return 0;

}
