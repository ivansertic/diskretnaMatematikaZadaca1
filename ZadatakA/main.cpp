#include <iostream>
#include "Knight.h"
#include "Rook.h"
#include "Bishop.h"
#include "Queen.h"

int main() {

    ChessPiece* kn = new Queen("D4");

    kn->printAttackingPositions();
    return 0;
}
