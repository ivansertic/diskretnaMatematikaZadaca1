//
// Created by ivansertic on 3/19/21.
//

#include "Position.h"

Position::Position(int row, int column) {
    this->row = row;
    this->column = column;
}

int Position::getRow() {
    return this->row;
}

int Position::getColumn() {
    return this->column;
}
