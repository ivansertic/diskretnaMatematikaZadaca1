//
// Created by ivansertic on 3/20/21.
//

#ifndef UNTITLED_QUEEN_H
#define UNTITLED_QUEEN_H


#include "Bishop.h"
#include "Rook.h"

class Queen: public Rook, public Bishop {
public:
    Queen(std::string position);
    void printAttackingPositions() override;
};


#endif //UNTITLED_QUEEN_H
