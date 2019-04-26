#include<iostream>
#include<algorithm>

using namespace std;

class Dice {
    public:
        int D[6];

        void constractor(int d1, int d2, int d3, int d4, int d5, int d6);
        void Rotate_E();
        void Rotate_N();
        void Rotate_S();
        void Rotate_W();

};

void Dice::constractor (int d1, int d2, int d3, int d4, int d5, int d6) {
    D[0] = d1;
    D[1] = d2;
    D[2] = d3;
    D[3] = d4;
    D[4] = d5;
    D[5] = d6;
}

void Dice::Rotate_E () {
    int tmp;

    tmp = D[2];
    D[2] = D[0];
    D[0] = D[3];
    D[3] = D[5];
    D[5] = tmp;
}

void Dice::Rotate_N () {
    int tmp;

    tmp = D[4];
    D[4] = D[0];
    D[0] = D[1];
    D[1] = D[5];
    D[5] = tmp;
}

void Dice::Rotate_S () {
    int tmp;

    tmp = D[4];
    D[4] = D[5];
    D[5] = D[1];
    D[1] = D[0];
    D[0] = tmp;
}

void Dice::Rotate_W () {
    int tmp;

    tmp = D[2];
    D[2] = D[5];
    D[5] = D[3];
    D[3] = D[0];
    D[0] = tmp;
}

bool Dice_Compare (Dice dice0, Dice dice1) {

    for (int X = 0; X < 6; X++) {

        Dice dice[2];
        dice[0] = dice0;
        dice[1] = dice1;

        if (X == 0) {

            dice[1].Rotate_S();
        
        } else if (X == 1) {

        } else if (X == 2) {

            dice[1].Rotate_W();
            dice[1].Rotate_S();

        } else if (X == 3) {

            dice[1].Rotate_E();
            dice[1].Rotate_S();

        } else if (X == 4) {

            dice[1].Rotate_S();
            dice[1].Rotate_S();

        } else {

            dice[1].Rotate_N();

        }

        for (int i = 0; i < 4; i++) {

            dice[1].Rotate_E();

            for (int i = 0; i < 6; i++) {
                if (dice[0].D[i] != dice[1].D[i]) {
                    // cout << "X: " << X << " i: " << i << endl;
                    break;
                }

                if (i == 5) {
                    // cout << "X: " << X << endl;
                    return true;
                }
            }
        }

    }

    return false;

}

int main () {

    Dice dice[2];
    
    for (int i = 0; i < 2; i++) {
        
        int d1, d2, d3, d4, d5, d6;
        cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;

        dice[i].constractor(d1, d2, d3, d4, d5, d6);

    }

    bool answer = Dice_Compare (dice[0], dice[1]);

    if (answer) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}