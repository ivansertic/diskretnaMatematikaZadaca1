//
// Created by ivansertic on 3/20/21.
//

#include <iostream>
#include "Queen.h"

Queen::Queen(std::string position) : Bishop(position), Rook(position), ChessPiece(position,true) {
    position = position;

    std::cout << position << std::endl;
}

void Queen::printAttackingPositions() {
    Bishop::printAttackingPositions();
    Rook::printAttackingPositions();

}
