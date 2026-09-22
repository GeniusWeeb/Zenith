#ifndef BOARD_H
#define BOARD_H

#include<definitions.h>

class Board {

    private:
        uint64_t pieces[2][6]; //Color and Pieces Type
        uint64_t occupied[3]; //tracks all the pieces
    public:
        Board();    
        void ClearBoard();
        void SetPiece(int square, PieceType piece, Color color);
        void PrintBoard(uint64_t bitBoard) const;



        //getter func
        //piece specific

        uint64_t GetPieceBitBoard(Color color, PieceType piece) const 
        {
            return pieces[color][piece];
        }


        //occupany masks

        uint64_t GetOccupanyMask(Color color)
        {
            return occupied[color];
        }
};


#endif