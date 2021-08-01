#include <stdio.h>

void a(const char*);

int main(int argc, char** argv){
  char x[5] = "test";
  a(x);
  
  return 0;
}

void a(const char* x){
  printf("test word is %s.\n", x);
}

