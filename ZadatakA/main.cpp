#include <iostream>
#include "Knight.h"
#include "Rook.h"

int main() {

    ChessPiece* kn = new Rook("D4");

    kn->printAttackingPositions();
    return 0;
}
