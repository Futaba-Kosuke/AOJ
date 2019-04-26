#include<stdio.h>
using namespace std;

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int d, r;
    double f;
    d = a / b;
    r = a % b;
    f = 1.0 * a / b;

    printf("%d %d %.8f\n", d, r, f);

    return 0;

}