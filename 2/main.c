#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char ** argv) {
    printf("Hello World!\n");
}

int EMSCRIPTEN_KEEPALIVE myFunction(int x, int y) {
  printf("myFunction result is: %d.\n", x + y);
  return 0;
}