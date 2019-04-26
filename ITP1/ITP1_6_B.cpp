#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int n;

    bool S[13], H[13], C[13], D[13];
    fill(S, S + 13, false);
    fill(H, H + 13, false);
    fill(C, C + 13, false);
    fill(D, D + 13, false);

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        char a;
        int b;

        std::cin >> a >> b;

        switch (a) {
            case 'S':
                S[b - 1] = true;
                break;
            case 'H':
                H[b - 1] = true;
                break;
            case 'C':
                C[b - 1] = true;
                break;
            case 'D':
                D[b - 1] = true;
                break;
        }
    }

    // std::cout << "XXXXXXXXXXXXXXXXXXXXX\n";

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++) {
            switch (i) {
                case 0:
                    if (S[j] == false) {
                        std::cout << "S " << j + 1 << endl; 
                    }
                    break;
                case 1:
                    if (H[j] == false) {
                        std::cout << "H " << j + 1 << endl; 
                    }
                    break;
                case 2:
                    if (C[j] == false) {
                        std::cout << "C " << j + 1 << endl; 
                    }
                    break;
                case 3:
                    if (D[j] == false) {
                        std::cout << "D " << j + 1 << endl; 
                    }
                    break;
            }
        }
    }

    return 0;
}