#include<iostream>

#define MAX 100

class Stack {
    public:
        int X[100];
        int top;

        void constractor();  // 初期化
        void push(int X);  // スタックのトップに要素Xを追加
        int pop();  // スタックのトップから要素を取り出し
        void isEmpty();  // スタックが空かを調べる
        void isFull();  // スタックが満杯か調べる
};

void Stack::constractor () {
    top = 0;
    X[top] = 0; 
}

void Stack::push (int C) {
    X[top] = C;
    top++;
}

int Stack::pop (void) {

    if (isEmpty() == false) {
        std::cout << "要素がありません" << std::endl;
    }
    top--;
    return X[top];
}

bool Stack::isEmpty (void) {
    return top == 0;
}

bool Stack::isFull (void) {
    return top >= MAX - 1;
}

void calculation (Stack Stack, char Operation) {

    int value1 = Stack.pop();
    int value2 = Stack.pop();

    int answer;

    if (Operation == '+') {
        answer = value2 + value1;
        Stack.push(answer);
    }
    else if (Operation == '-') {
        answer = value2 - value1;
        Stack.push(answer);
    }
    else if (Operation == '*') {
        answer = value2 * value1;
        Stack.push(answer);
    }
    else {
        std::cout << "error" << endl;
    }

}

int main () {

    char X;
    Stack stack;

    while (cin >> X) {
        
        if (X == EOF || X == '\n') {
            break;
        }
        else if ('0' <= X && X <= '9') {
            stack.push(X);
        }
        else if (X == '+' || X == '-' || X == '*') {
            calculation (stack, X);
        }

    }

    cout << stack.X[0] << endl;

    return 0;
}