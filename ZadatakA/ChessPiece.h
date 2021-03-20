//
// Created by ivansertic on 3/19/21.
//

#ifndef UNTITLED_CHESSPIECE_H
#define UNTITLED_CHESSPIECE_H
#include <string>
#include "Position.h"

class ChessPiece {
private:
    int positionRow;
    int positionColumn;

    void setInitialPosition(std::string position);


public:
    ChessPiece(std::string position);

    int getPositionRow();
    int getPositionColumn();
    void transformPositions(Position* positions[], int index);

    virtual void printAttackingPositions();


};


#endif //UNTITLED_CHESSPIECE_H
