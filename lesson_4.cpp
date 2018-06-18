#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<char> dynArr (2);
    char myChar = 'a';
    dynArr[0] = myChar;
    dynArr[1] = myChar;

    // exercise 1

    enum ChessPiece
    {
        Pawn = 10,
        King,
        Queen,
        Bishop,
        Rook,
        Knight,
    };

    int chessBoard [8][8] = {
        {Rook, Knight, Bishop, King, Queen, Bishop, Knight, Rook},
        {Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn},
        {-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1},
        {Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn},
        {Rook, Knight, Bishop, King, Queen, Bishop, Knight, Rook}
    };

    // exercise 2
    // 5 indexes in the array 0 - 5
    // 6 values in the array 
    int myNumbers[5] = {0};

    // cout << sizeof(myNumbers);

    myNumbers[5] = 450;

    // cout << sizeof(myNumbers);

    // cout << myNumbers[5];

    // execise 3

    int myNumbers_again[5];
    cout << myNumbers_again[3];


    return 0;
}