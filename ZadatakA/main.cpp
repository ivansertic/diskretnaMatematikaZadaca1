#include <iostream>
#include "Knight.h"
#include "Rook.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"

int main() {

    ChessPiece* kn = new King("D8");

    kn->printAttackingPositions();
    return 0;
}
