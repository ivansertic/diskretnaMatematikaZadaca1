#include <iostream>
#include "Knight.h"
int main() {

    ChessPiece* kn = new Knight("A5");

    kn->printAttackingPositions();
    return 0;
}
