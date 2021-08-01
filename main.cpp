#include <cstdio>

void a(const char*);

int main(){
  char x[5] = "test2";
  a(x);
  
  return 0;
}

void a(const char* x){
  printf("test word is %s.\n", x);
}

