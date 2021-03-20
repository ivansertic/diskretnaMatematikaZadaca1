//
// Created by ivansertic on 3/20/21.
//

#include "Rook.h"

Rook::Rook(std::string position) : ChessPiece(position) {
    position = position;
    this->movement = new Position(1,1);
}

void Rook::printAttackingPositions() {
    int index = 0;
    Position* positions[100];

    positions[index] = new Position(this->getPositionRow(), this->getPositionColumn());

    index++;

    //ajmo gore
    this->up(positions,index);

    //ajmo dolje
    this->down(positions,index);

    //nemoj ići lijevo ako semafor je desno
    this->left(positions,index);

    //nego hajde desno ako semafor je lijevo
    this->right(positions, index);

    //da vidimo gdje smo
    this->transformPositions(positions,index);
}

Position *Rook::getMovements() {
    return this->movement;
}

void Rook::up(Position **positions, int &index) {

    int lastRowPosition = this->getPositionRow();

    while(lastRowPosition < 7) {
        positions[index] = new Position(lastRowPosition + this->getMovements()->getRow(), this->getPositionColumn());
        lastRowPosition += this->getMovements()->getRow();
        index++;
    }
}

void Rook::down(Position **positions, int &index) {
    int lastRowPosition = this->getPositionRow();

    while(lastRowPosition > 0) {
        positions[index] = new Position(lastRowPosition - this->getMovements()->getRow(), this->getPositionColumn());
        lastRowPosition -= this->getMovements()->getRow();
        index++;
    }
}

void Rook::left(Position **positions, int &index) {

    int lastColumnPosition = this->getPositionColumn();

    while(lastColumnPosition > 0) {
        positions[index] = new Position(this->getPositionRow(),lastColumnPosition - this->getMovements()->getColumn());
        lastColumnPosition -= this->getMovements()->getColumn();
        index++;
    }
}

void Rook::right(Position **positions, int &index) {
    int lastColumnPosition = this->getPositionColumn();

    while(lastColumnPosition < 7) {
        positions[index] = new Position(this->getPositionRow(),lastColumnPosition + this->getMovements()->getColumn());
        lastColumnPosition += this->getMovements()->getColumn();
        index++;
    }
}


