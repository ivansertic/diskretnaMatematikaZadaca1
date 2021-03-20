//
// Created by ivansertic on 3/20/21.
//

#ifndef UNTITLED_BISHOP_H
#define UNTITLED_BISHOP_H


#include "ChessPiece.h"

class Bishop: virtual public ChessPiece {
private:
    Position* movement;
public:
    explicit Bishop(std::string position);

    void printAttackingPositions() override;

    Position* getMovement();
    void upRight(Position *positions[], int &index);
    void upLeft(Position *positions[], int &index);
    void downLeft(Position *positions[], int &index);
    void downRight(Position *positions[], int &index);
};


#endif //UNTITLED_BISHOP_H
