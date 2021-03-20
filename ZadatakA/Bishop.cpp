//
// Created by ivansertic on 3/20/21.
//

#include "Bishop.h"

Bishop::Bishop(std::string position) : ChessPiece(position) {
    position = position;
    this->movement = new Position(1,1);
}

void Bishop::printAttackingPositions() {

    int index = 0;
    Position* positions[100];
    positions[index] = new Position(this->getPositionRow(), this->getPositionColumn());


    index++;
    //dijagonala gore desno
    this->upRight(positions,index);

    //dijagonala gore lijevo
    this->upLeft(positions,index);

    //dijagonala dolje lijevo
    this->downLeft(positions,index);

    //dijagonala dolje desno
    this->downRight(positions, index);

    this->transformPositions(positions,index);

}

void Bishop::upRight(Position **positions, int &index) {

    Position* lastPosition = new Position(this->getPositionRow(), this->getPositionColumn());

    while (lastPosition->getRow() < 7 && lastPosition->getColumn() < 7){

        positions[index] = new Position(lastPosition->getRow() + this->getMovement()->getRow(), lastPosition->getColumn() + this->getMovement()->getColumn());

        index++;

        lastPosition = new Position(lastPosition->getRow() + this->getMovement()->getRow(), lastPosition->getColumn() + this->getMovement()->getColumn());
    }

    delete lastPosition;
}

void Bishop::upLeft(Position **positions, int &index) {

    Position* lastPosition = new Position(this->getPositionRow(), this->getPositionColumn());

    while (lastPosition->getRow() < 7 && lastPosition->getColumn() > 0){

        positions[index] = new Position(lastPosition->getRow() + this->getMovement()->getRow(), lastPosition->getColumn() - this->getMovement()->getColumn());

        index++;

        lastPosition = new Position(lastPosition->getRow() + this->getMovement()->getRow(), lastPosition->getColumn() - this->getMovement()->getColumn());
    }

    delete lastPosition;
}

void Bishop::downLeft(Position **positions, int &index) {
    Position* lastPosition = new Position(this->getPositionRow(), this->getPositionColumn());

    while (lastPosition->getRow() > 0 && lastPosition->getColumn() > 0){

        positions[index] = new Position(lastPosition->getRow() - this->getMovement()->getRow(), lastPosition->getColumn() - this->getMovement()->getColumn());

        index++;

        lastPosition = new Position(lastPosition->getRow() - this->getMovement()->getRow(), lastPosition->getColumn() - this->getMovement()->getColumn());
    }

    delete lastPosition;
}

void Bishop::downRight(Position **positions, int &index) {
    Position* lastPosition = new Position(this->getPositionRow(), this->getPositionColumn());

    while (lastPosition->getRow() > 0 && lastPosition->getColumn() < 7){

        positions[index] = new Position(lastPosition->getRow() - this->getMovement()->getRow(), lastPosition->getColumn() + this->getMovement()->getColumn());

        index++;

        lastPosition = new Position(lastPosition->getRow() - this->getMovement()->getRow(), lastPosition->getColumn() + this->getMovement()->getColumn());
    }

    delete lastPosition;
}

Position *Bishop::getMovement() {
    return this->movement;
}
