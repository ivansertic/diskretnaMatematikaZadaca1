//
// Created by ivansertic on 3/19/21.
//

#ifndef UNTITLED_KNIGHT_H
#define UNTITLED_KNIGHT_H
#include "ChessPiece.h"
#include "Position.h"

class Knight: public ChessPiece {
private:
    int columnChange;
    int rowChange;
    Position *movement;

    void firstUp(Position *positions[], int &index);
    void firstDown(Position *positions[], int &index);
    void firstLeft(Position *positions[], int &index);
    void firstRight(Position *positions[], int &index);

public:
    Knight(std::string position);

    void printAttackingPositions();


    Position* getMovements();
};


#endif //UNTITLED_KNIGHT_H
