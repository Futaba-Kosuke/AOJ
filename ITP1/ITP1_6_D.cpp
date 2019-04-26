#include<iostream>

using namespace std;

int main() {

    int A[100][100];
    int B[100];
    int C[100] = {0};

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j++) {
            C[i] += A[i][j] * B[j];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << C[i] << endl;
    }

    return 0;
}