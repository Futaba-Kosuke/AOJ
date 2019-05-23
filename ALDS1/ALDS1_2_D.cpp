#include<iostream>

using namespace std;

void insertionSort (int A[], int N, int G) {
    
    for (int i = G, i < N - 1; i++) {
        int v = A[i];
        for (int j = i - G; j >= 0 && A{j} > v; j -= g) {
            A[j + g] = A[j];
        } 
    }
}

int main () {

}