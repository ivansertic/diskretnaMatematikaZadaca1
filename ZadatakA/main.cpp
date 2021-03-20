#include <iostream>
#include "Knight.h"
#include "Rook.h"
#include "Bishop.h"

int main() {

    ChessPiece* kn = new Bishop("A1");

    kn->printAttackingPositions();
    return 0;
}
