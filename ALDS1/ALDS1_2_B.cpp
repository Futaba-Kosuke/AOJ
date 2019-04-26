#include<iostream>
#include<algorithm>

using namespace std;

int selectionSort (int A[], int N) {
    
    int cnt = 0;    // 入れ替え回数のカウント変数

    for (int i = 0; i < N - 1; i++) {
        int minj = i;

        for (int j = i; j < N; j++) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }

        if (i != minj) {
            swap(A[i], A[minj]);
            cnt++;
        }
    } 

    return cnt;

}

void disp (int A[], int n) {

    for (int i = 0; i < n; i++) {
    
        if (i > 0) {
            cout << " ";
        }
        cout << A[i];
    
    }

    cout << endl;

}

int main (void) {

    int A[100], N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int cnt = selectionSort (A, N);

    disp (A, N);

    cout << cnt << endl;

    return 0;
}