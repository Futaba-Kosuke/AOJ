#include<iostream>
void call();
void check_num();
void include3();
void end_check_num();

int i, x, n;

void call() {
    i = 1;
    check_num();
}

void check_num() {
    x = i;
    if(x % 3 == 0) {
        std::cout << " " << i;
        end_check_num();
    } else {
        include3();
    }
}

void include3() {
    if (x % 10 == 3) {
        std::cout << " " << i;
        end_check_num();
    } else {
        x /= 10;
        if (x) {
            include3();
        }
        end_check_num();
    }

}

void end_check_num() {
    if(++i <= n) {
        check_num();
}

int main() {

    std::cin >> n;

    call();

    std::cout << std::endl;

    return 0;
}