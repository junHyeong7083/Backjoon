#include <iostream>
using namespace std;

void movePiece(char& col, int& row, const string& move) {
    if (move == "R") col++;
    else if (move == "L" ) col--;
    else if (move == "B" ) row--;
    else if (move == "T" ) row++;
    else if (move == "RT" ) { col++; row++; }
    else if (move == "LT" ) { col--; row++; }
    else if (move == "RB" ) { col++; row--; }
    else if (move == "LB" ) { col--; row--; }
}

int main() {
    char kingCol, stoneCol;
    int kingRow, stoneRow;

    cin >> kingCol >> kingRow >> stoneCol >> stoneRow;

    int t;
    cin >> t;

    while (t--) {
        string move;
        cin >> move;

        char originalKingCol = kingCol;
        int originalKingRow = kingRow;

        char originalStoneCol = stoneCol;
        int originalStoneRow = stoneRow;
        movePiece(kingCol, kingRow, move);


      if (kingCol < 'A' || kingCol > 'H' || kingRow < 1 || kingRow > 8) {
          kingCol = originalKingCol;
          kingRow = originalKingRow;
      } // 킹이 나가면 초기화
      
        if (kingCol == stoneCol && kingRow == stoneRow) {
            movePiece(stoneCol, stoneRow, move);
        } // 안나가고 돌이랑 부딪히면 돌이동

        if (stoneCol < 'A' || stoneCol > 'H' || stoneRow < 1 || stoneRow > 8) {
            stoneCol = originalStoneCol; 
            stoneRow = originalStoneRow;
            kingCol = originalKingCol;
            kingRow = originalKingRow;
        } // 돌이 나가면 돌, 킹 둘다 초기화
    }

    cout << kingCol << kingRow << "\n";
    cout << stoneCol << stoneRow << "\n";

    return 0;
}
