#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    int n;
    int a[100];

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    reverse(a, a + n);

    for (int i = 0; i < n; i++) {
        std::cout << a[i];
        if (i != n - 1) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}