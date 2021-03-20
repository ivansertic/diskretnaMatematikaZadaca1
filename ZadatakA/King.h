//
// Created by ivansertic on 3/20/21.
//

#ifndef UNTITLED_KING_H
#define UNTITLED_KING_H


#include "ChessPiece.h"

class King: public ChessPiece {
private:
    Position* movement;
public:
    King(std::string position);

    void printAttackingPositions() override;

    Position* getMovements();

};


#endif //UNTITLED_KING_H
