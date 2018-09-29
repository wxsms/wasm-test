#include <stdio.h>
#include <sys/time.h>
struct timeval start, stop;
double secs = 0;

long long timeInMilliseconds(void) {
    struct timeval tv;
    gettimeofday(&tv,NULL);
    return (((long long)tv.tv_sec)*1000)+(tv.tv_usec/1000);
}

int fibonacci(int x) {
  if (x == 1 || x == 2) {
    return 1;
  }
  return fibonacci(x - 1) + fibonacci(x - 2);
}

int main(int argc, char ** argv) {
    long long start = timeInMilliseconds();
    printf("Result: %d\n", fibonacci(40));
    long long end = timeInMilliseconds();
    printf("%lldms\n", end - start);
    return 0;
}
