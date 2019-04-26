#include<iostream>

using namespace std;

bool bubbleSort (char C[], int A[], int N) {

    // int cnt = 0;
    bool stable = true;

    bool flag = true;

    while (flag) {
        flag = false;
        for (int i = N - 1; i > 0; i--) {
            if (A[i] < A[i - 1]) {
                swap (C[i], C[i - 1]);
                swap (A[i], A[i - 1]);
                flag = true;
                if (C[i] == C[i - 1]) {
                    stable = false;
                }
                // disp (A, N);
            }
        }
        // cout << endl;
    }

    return stable;

}

bool selectionSort (char C[], int A[], int N) {
    
    // int cnt = 0;    // 入れ替え回数のカウント変数
    bool stable = true;

    for (int i = 0; i < N - 1; i++) {
        int minj = i;

        for (int j = i; j < N; j++) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }

        if (i != minj) {
            swap (C[i], C[minj]);
            swap (A[i], A[minj]);
            // cnt++;
            if (C[i] == C[minj]) {
                stable = false;
            }
        }
    } 

    return stable;

}

void disp (char C[], int A[], int N, bool stable) {

    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << C[i] << A[i];
    }

    cout << endl;
    
    if (stable) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

}

int main () {

    int N;
    char Cb[72], Cs[72];

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> Cb[i] >> Cb[i + N];
        Cs[i] = Cb[i];
        Cs[i + N] = Cb[i + N];
    }

    int Ab[36], As[36];
    for (int i = 0; i < N; i++) {
        Ab[i] = Cb[i + N] - '0';
        As[i] = Cb[i + N] - '0';
    }

    bool stableB = bubbleSort(Cb, Ab, N);
    bool stableS = selectionSort(Cs, As, N);

    disp (Cb, Ab, N, stableB);
    disp (Cs, As, N, stableS);

    return 0;
}