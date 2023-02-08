#include <stdio.h>

typedef struct BLOCK_LETTER {
  char letter;
  char block[5][4];
} blockletter;

int main(void) {


  
  blockletter a = {
    'a',
    {

  {' ', 'A', 'A', ' '},
  {'A', ' ', ' ', 'A'},
  {'A', 'A', 'A', 'A'},
  {'A', ' ', ' ', 'A'},
  {'A', ' ', ' ', 'A'}
  
  
    }

};

  return 0;
}

void print_blockletter(blockletter bl){
  for (int row = 0; row < 5; row++)
    for (int col = 0; col < 4; col ++)
      printf("%c", bl.block[row][col]);
}