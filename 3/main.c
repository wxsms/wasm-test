#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char ** argv) {
    printf("Hello World!\n");
}

int EMSCRIPTEN_KEEPALIVE fibonacci(int x) {
  if (x == 1 || x == 2) {
    return 1;
  }
  return fibonacci(x - 1) + fibonacci(x - 2);
}