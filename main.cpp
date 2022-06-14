#include <bits/stdc++.h>
using namespace std;


char square[9] = {'1','2','3','4','5','6','7','8','9'};
char xMark = 'X';
char yMark = 'O';
/*
    * draw()
    * checkWin()
    * chooseMove()
*/

void display(int turn) {
    string res = (turn % 2) ? "X TURN" : "Y TURN";
    cout << res << "\n";
    cout << "\n";

    cout << "     |     |     " << "\n";
    cout << "  " << square[0] << "  |  " << square[1] << "  |  " << square[2] << "\n";

    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";

    cout << "  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << "\n";

    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";

    cout << "  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << "\n";

    cout << "     |     |     " << "\n" << "\n";
}

void mark(int n, int turn) {
    square[n-1] = (turn % 2) ? xMark : yMark;
}


int checkWin() {
    // hori
    if (square[0] == xMark && square[1] == xMark && square[2] == xMark) {
        cout << "\n\n\n\n\nPLAYER X WINS" << '\n';
        return 1;
    }

    if (square[3] == xMark && square[4] == xMark && square[5] == xMark) {
        cout << "\n\n\n\n\nPLAYER X WINS" << '\n';
        return 1;
    }
    
    if (square[6] == xMark && square[7] == xMark && square[8] == xMark) {
        cout << "\n\n\n\n\nPLAYER X WINS" << '\n';
        return 1;
    }



    if (square[0] == yMark && square[1] == yMark && square[2] == yMark) {
        cout << "\n\n\n\n\nPLAYER Y WINS" << '\n';
        return -1;
    }

    if (square[3] == yMark && square[4] == yMark && square[5] == yMark) {
        cout << "\n\n\n\n\nPLAYER Y WINS" << '\n';
        return -1;
    }
    
    if (square[6] == yMark && square[7] == yMark && square[8] == yMark) {
        cout << "\n\n\n\n\nPLAYER Y WINS" << '\n';
        return -1;
    }


    // VERT


    if (square[0] == xMark && square[3] == xMark && square[6] == xMark) {
        cout << "\n\n\n\n\nPLAYER X WINS" << '\n';
        return 1;
    }

    if (square[1] == xMark && square[4] == xMark && square[7] == xMark) {
        cout << "\n\n\n\n\nPLAYER X WINS" << '\n';
        return 1;
    }
    
    if (square[2] == xMark && square[5] == xMark && square[8] == xMark) {
        cout << "\n\n\n\n\nPLAYER X WINS" << '\n';
        return 1;
    }



    
    if (square[0] == yMark && square[3] == yMark && square[6] == yMark) {
        cout << "\n\n\n\n\nPLAYER Y WINS" << '\n';
        return -1;
    }

    if (square[1] == yMark && square[4] == yMark && square[7] == yMark) {
        cout << "\n\n\n\n\nPLAYER Y WINS" << '\n';
        return -1;
    }
    
    if (square[2] == yMark && square[5] == yMark && square[8] == yMark) {
        cout << "\n\n\n\n\nPLAYER Y WINS" << '\n';
        return -1;
    }




    // DIAG

    if (square[0] == xMark && square[4] == xMark && square[8] == xMark) {
        cout << "\n\n\n\n\nPLAYER X WINS" << '\n';
        return 1;
    }

    if (square[2] == xMark && square[4] == xMark && square[6] == xMark) {
        cout << "\n\n\n\n\nPLAYER X WINS" << '\n';
        return 1;
    }
    


    if (square[0] == yMark && square[4] == yMark && square[8] == yMark) {
        cout << "\n\n\n\n\nPLAYER Y WINS" << '\n';
        return -1;
    }

    if (square[2] == yMark && square[4] == yMark && square[6] == yMark) {
        cout << "\n\n\n\n\nPLAYER Y WINS" << '\n';
        return -1;
    }



    return 0;
}
// 1 - X win
// -1 - Y win

int main(void) {
    int n;
    int turn = 1; // 1 = X, 2 = O
    do {
        display(turn);
        cout << "enter: ";
        cin >> n;
        mark(n, turn);
        turn++;
    } while (checkWin() == 0);
}
