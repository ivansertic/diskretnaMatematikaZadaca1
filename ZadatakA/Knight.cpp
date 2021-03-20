//
// Created by ivansertic on 3/19/21.
//

#include <iostream>
#include "Knight.h"

Knight::Knight(std::string position) : ChessPiece(position) {
    position = position;
    this->movement = new Position(2, 1);
}

void Knight::printAttackingPositions() {

    int index = 0;
    Position *positions[9];


    positions[index] = new Position(this->getPositionRow(), this->getPositionColumn());

    index++;

    //Slucaj gore lijevo/desno
    this->firstUp(positions, index);

    //Slucaj dolje lijevo/desno
    this->firstDown(positions, index);

    //slucaj lijevo gore/dolje
    this->firstLeft(positions, index);

    //slucaj desno gore/dolje
    this->firstRight(positions, index);

    //Formatiraj output u prihvatljiv oblik ljudskom oku
    this->transformPositions(positions, index);
}

Position *Knight::getMovements() {
    return this->movement;
}

void Knight::firstDown(Position *positions[], int &index) {

    if (this->getPositionRow() - this->getMovements()->getRow() >= 0) {
        if (this->getPositionColumn() + this->getMovements()->getColumn() < 8) {
            positions[index] = new Position(this->getPositionRow() - this->getMovements()->getRow(),
                                            this->getMovements()->getColumn() + this->getPositionColumn());
            index++;
        }

        if (this->getPositionColumn() - this->getMovements()->getColumn() > -1) {
            positions[index] = new Position(this->getPositionRow() - this->getMovements()->getRow(),
                                            this->getPositionColumn() - this->getMovements()->getColumn());
            index++;
        }
    }
}

void Knight::firstUp(Position *positions[], int &index) {

    if (this->getPositionRow() + this->getMovements()->getRow() < 8) {
        if (this->getPositionColumn() + this->getMovements()->getColumn() < 8) {
            positions[index] = new Position(this->getMovements()->getRow() + this->getPositionRow(),
                                            this->getMovements()->getColumn() + this->getPositionColumn());
            index++;
        }

        if (this->getPositionColumn() - this->getMovements()->getColumn() > -1) {
            positions[index] = new Position(this->getMovements()->getRow() + this->getPositionRow(),
                                            this->getPositionColumn() - this->getMovements()->getColumn());
            index++;
        }
    }
}

void Knight::firstLeft(Position *positions[], int &index) {

    if (this->getPositionColumn() - this->getMovements()->getRow() > -1) {
        if (this->getPositionRow() + this->getMovements()->getColumn() < 8) {
            positions[index] = new Position(this->getMovements()->getColumn() + this->getPositionRow(),
                                            this->getPositionColumn() - this->getMovements()->getRow());
            index++;
        }

        if (this->getPositionRow() - this->getPositionColumn() > -1) {
            positions[index] = new Position(this->getPositionRow() - this->getMovements()->getColumn(),
                                            this->getPositionColumn() - this->getMovements()->getRow());
            index++;
        }
    }
}

void Knight::firstRight(Position *positions[], int &index) {

    if (this->getPositionColumn() + this->getMovements()->getRow() < 8) {
        if (this->getPositionRow() + this->getMovements()->getColumn() < 8) {
            positions[index] = new Position(this->getMovements()->getColumn() + this->getPositionRow(),
                                            this->getPositionColumn() + this->getMovements()->getRow());
            index++;
        }

        if (this->getPositionRow() - this->getPositionColumn() > -1) {
            positions[index] = new Position(this->getPositionRow() - this->getMovements()->getColumn(),
                                            this->getPositionColumn() + this->getMovements()->getRow());
            index++;
        }
    }
}
