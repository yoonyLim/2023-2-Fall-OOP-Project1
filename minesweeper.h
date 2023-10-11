#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

/*
You must implement the project in a function called void minesweeper( string commands, string output );
You must prototype the function in a file called minesweeper.h
You must use a 2D array of characters of size 8x8.
You must implement each of the 3 commands as a function.
Your program must use the commands variable to open the file for the commands.
Your program must use the output variable to open a file for output.
Do not use global variables of any kind.  Global constants are great.
*/

// commands는 열 파일, output은 슬 파일 경로 나타냄
void load(string commands, ifstream& fin, char (&board)[8][8], char (&display)[8][8]) {
    fin.open(commands);
    string line;

    if(!fin) {
        cout << "no file" << endl;
    } else {
        cout << "success" << endl;
    }


    /*
    for (int i = 0; getline(fin, line); i++) {
        for (int j = 0; j < 8; j++) {
            cout << "line char: " << line[j] << endl;
            board[i][j] = line[j];
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
     */
}

void _touch_() {

}

void _display_() {

}

void minesweeper(string commands, string output) {
    char board[8][8];
    char display[8][8] = {{'.'}};

    ifstream fin;

    load(commands, fin, board, display);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}