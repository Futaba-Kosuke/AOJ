#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
    int n;
    int a[10000];

    int minx, maxx;
    long long int sumx = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sumx += a[i];
    }

    sort(a, a + n);

    minx = a[0];
    maxx = a[n - 1];

    printf("%d %d %ld\n", minx, maxx, sumx);

    return 0;
}