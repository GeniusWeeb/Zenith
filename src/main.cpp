//Entry point for the game engine 


#include <iostream>
#include "definitions.h"
#include "board.h"


//Next phase is to modify for FEN
 int main()
 {
    Board board ;

    std::cout<< "Chess Engine initialized" ;

    board.SetPiece(SQ_A1, ROOK, White);
    board.SetPiece(SQ_E1, KING, White);
    board.SetPiece(SQ_E8, KING, Black);



    std::cout<< "\n showing whoole board";
    board.PrintBoard(board.GetOccupanyMask(BOTH));
   
    return 0;

 }
