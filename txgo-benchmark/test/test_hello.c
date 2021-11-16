/* Hello World program */

#include<stdio.h>

void bar(){
    printf("Hello World 2\n");
}

void foo(){
    bar();
}

int main()
{
      printf("Hello World 1\n");
      foo();
      return 1;
}
