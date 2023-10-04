#include <stdio.h>

enum day {SUN = 1, MON = 1, TUE, WED, THU, FRI, SAT};

int main()
{
    enum day d = FRI;
    printf("%d\n", d);
    return 0;
}