//
// Created by ivansertic on 3/20/21.
//

#include "Queen.h"

Queen::Queen(std::string position) : Bishop(position), Rook(position), ChessPiece(position) {
    position = position;
}

void Queen::printAttackingPositions() {
    Bishop::printAttackingPositions();
    Rook::printAttackingPositions();
}
