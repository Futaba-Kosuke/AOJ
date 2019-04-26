#include<cstdio>
#include<cmath>

using namespace std;

int main() {

    double r;

    scanf("%lf", &r);

    double S, L;
    S = r * r * M_PI;
    L = 2 * r * M_PI;

    printf("%lf %lf\n", S, L);

    return 0;
}