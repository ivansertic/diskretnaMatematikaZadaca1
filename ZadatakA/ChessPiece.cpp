//
// Created by ivansertic on 3/19/21.
//

#include <iostream>
#include "ChessPiece.h"

void ChessPiece::setInitialPosition(std::string position) {

    switch(position[0]){
        case 'A':
            this->positionColumn = 0;
            break;
        case 'B':
            this->positionColumn = 1;
            break;
        case 'C':
            this->positionColumn = 2;
            break;
        case 'D':
            this->positionColumn = 3;
            break;
        case 'E':
            this->positionColumn = 4;
            break;
        case 'F':
            this->positionColumn = 5;
            break;
        case 'G':
            this->positionColumn = 6;
            break;
        case 'H':
            this->positionColumn = 7;
            break;
    }

    this->positionRow = position[1] - '0' -1;
}

ChessPiece::ChessPiece(std::string position) {
    this->setInitialPosition(position);
}

void ChessPiece::printAttackingPositions() {
    std::cout<<"You need to override me!";
}

int ChessPiece::getPositionRow() {
    return this->positionRow;
}

int ChessPiece::getPositionColumn() {
    return this->positionColumn;
}

void ChessPiece::transformPositions(Position* positions[], int index) {

    for(int i = 0; i < index; i++){
        // Ovdje pretvaramo idex u slovo
        switch(positions[i]->getColumn()){
            case 0:
                std::cout<<'A';
                break;
            case 1:
                std::cout<<'B';
                break;
            case 2:
                std::cout<<'C';
                break;
            case 3:
                std::cout<<'D';
                break;
            case 4:
                std::cout<<'E';
                break;
            case 5:
                std::cout<<'F';
                break;
            case 6:
                std::cout<<'G';
                break;
            case 7:
                std::cout<<'H';
                break;
        }

        std::cout<<positions[i]->getRow() + 1 <<std::endl;
    }
}
