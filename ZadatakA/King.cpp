//
// Created by ivansertic on 3/20/21.
//

#include "King.h"

King::King(std::string position) : ChessPiece(position) {
    position = position;
    this->movement = new Position(1,1);
}

void King::printAttackingPositions() {

    int index = 0;
    Position* positions[9];

    positions[index] = new Position(this->getPositionRow(),this->getPositionColumn());

    index++;

    //ajmo gore
    if(this->getPositionRow() + this->getMovements()->getRow() < 8){
        positions[index] = new Position(this->getPositionRow() + this->getMovements()->getRow(),this->getPositionColumn());
        index++;

    }

    //ajmo dolje
    if(this->getPositionRow() - this->getMovements()->getRow() > -1){
        positions[index] = new Position(this->getPositionRow() - this->getMovements()->getRow(),this->getPositionColumn());
        index++;

    }

    //ajmo desno
    if(this->getPositionColumn() + this->getMovements()->getColumn() < 8){
        positions[index] = new Position(this->getPositionRow(),this->getPositionColumn() + this->getMovements()->getColumn());
        index++;

    }

    //ajmo lijevo
    if(this->getPositionColumn() - this->getMovements()->getColumn() > -1){
        positions[index] = new Position(this->getPositionRow(),this->getPositionColumn() - this->getMovements()->getColumn());
        index++;

    }

    //ajmo gore desno
    if(this->getPositionRow() + this->getMovements()->getRow() < 8 && this->getPositionColumn() + this->getMovements()->getColumn() < 8){
        positions[index] = new Position(this->getPositionRow() + this->getMovements()->getRow(),this->getPositionColumn() + this->getMovements()->getColumn());
        index++;

    }

    //ajmo gore lijevo
    if(this->getPositionRow() + this->getMovements()->getRow() < 8 && this->getPositionColumn() - this->getMovements()->getColumn() > -1){
        positions[index] = new Position(this->getPositionRow() + this->getMovements()->getRow(),this->getPositionColumn() - this->getMovements()->getColumn());
        index++;

    }

    //ajmo dolje desno
    if(this->getPositionRow() - this->getMovements()->getRow() > -1 && this->getPositionColumn() + this->getMovements()->getColumn() < 8){
        positions[index] = new Position(this->getPositionRow() - this->getMovements()->getRow(),this->getPositionColumn() + this->getMovements()->getColumn());
        index++;

    }

    //ajmo dolje lijevo
    if(this->getPositionRow() - this->getMovements()->getRow() > -1 && this->getPositionColumn() - this->getMovements()->getColumn() > -1){
        positions[index] = new Position(this->getPositionRow() - this->getMovements()->getRow(),this->getPositionColumn() - this->getMovements()->getColumn());
        index++;
    }

    this->transformPositions(positions,index);
}

Position *King::getMovements() {
    return this->movement;
}
