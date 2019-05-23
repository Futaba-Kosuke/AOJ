// #include<iostream>

// using namespace std;

// int main() {
//     // string s;

//     // cin >> s;

//     // cout << sizeof(s);

//     int tmp;
//     int D1, D2, D3, D4, D5, D6;
//     cin >> D1 >> D2 >> D3 >> D4 >> D5 >> D6;

//     tmp = D1 = D2 = D3 = D4 = D5 = D6;

//     cout << tmp << " " << D1 << " " << D3 << endl;

//     return 0;
// }

#include<stdio.h>
#include<math.h>

double Discriminant (int a, int b, int c) {
    // 判別式Dを求める
    
    double D;
    
    D = b * b - 4 * a * c;

    return D;

}

void Quadratic_equation (int a, int b, int c, double D) {
    // 2次方程式の解を求める
    
    double answer1, answer2;

    if (D > 0) {
        printf ("2つの実数解\n");

        answer1 = -1 * b / 2;
        answer2 = sqrt(D) / 2;
    
        printf ("X = %lf, %lf\n", answer1 + answer2, answer1 - answer2);

    } else if (D == 0) {
        prinf ("1つの実数解（重解）\n");

        answer1 = -1 * b / 2;

        printf ("X = %lf\n", answer1);

    } else if (D < 0) {
        printf ("2つの虚数解\n");
    
        answer1 = -1 * b / 2;
        answer2 = sqrt(-1 * D) / 2;

        printf("X = %lf+%lfi, %lf-%lfi", answer1, answer2, answer1, answer2);
    }

    return;
}

int main (void) {
    
    int a, b, c, D;
    scanf ("%d %d %d", &a, &b, &c);

    D = Discriminant (a, b, c);

    Quadratic_equation (a, b, c, D);

    return 0;

}