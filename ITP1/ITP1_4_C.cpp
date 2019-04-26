#include<cstdio>

using namespace std;

int main() {

    int a, b;
    char op;

    int answer;
    
    while (1) {
        scanf("%d %c %d", &a, &op, &b);

        if (op == '+') {
            answer = a + b;
        } else if (op == '-') {
            answer = a - b;
        } else if (op == '*') {
            answer = a * b;
        } else if (op == '/') {
            answer = a / b;
        } else if (op == '?') {
            break;
        }

        printf("%d\n", answer);

    }

    return 0;
}