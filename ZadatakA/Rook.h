//
// Created by ivansertic on 3/20/21.
//

#ifndef UNTITLED_ROOK_H
#define UNTITLED_ROOK_H


#include "ChessPiece.h"

class Rook : virtual public ChessPiece{
private:
    Position* movement;
public:
    explicit Rook(std::string position);

    void printAttackingPositions() override;

    void up(Position *positions[], int &index);
    void down(Position *positions[], int &index);
    void left(Position *positions[], int &index);
    void right(Position *positions[], int &index);

    Position* getMovements();
};


#endif //UNTITLED_ROOK_H
