#include<iostream>

using namespace std;

int main() {

    int house[4][3][10] = {0};

    int n;

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int b, f, r, v;
        std::cin >> b >> f >> r >> v;

        house[b - 1][f - 1][r - 1] += v;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                std::cout << " " << house[i][j][k];
            }
            std::cout << endl;
        }
        if (i != 3) {
            std::cout << "####################" << endl;
        }
    }

    return 0;
}