#include "board.h"
#include<iostream>


Board::Board(){
    ClearBoard();
}


//reset board to. 0

void Board::ClearBoard()
{
    for (int color = 0; color < 2 ; ++color )
    {
        for (int piece= 0 ; piece <6 ; ++piece )
            {
               pieces[color][piece] = 0ULL; //0 board
            }
    }


    for(int i = 0; i<3 ; ++i )
    {
            occupied[i] = 0ULL;
    }
}



void Board::SetPiece(int square,PieceType piece, Color color)
{
    pieces[color][piece] |= (1ULL << square);
    

    //update overall occupancy
    occupied[color] |= (1ULL << square);
    occupied[BOTH] |= (1ULL << square);

}

void Board::PrintBoard(uint64_t bitboard) const {
    std::cout << "\n";
    for (int rank = 7; rank >= 0; --rank) { // Print from Rank 8 down to Rank 1
        std::cout << rank + 1 << "  ";
        for (int file = 0; file < 8; ++file) { // Files A through H (Left to Right)
            int square = rank * 8 + file; // Convert 2D coordinates to 1D index (0-63)

            // Check if the bit is set at this square using a bitwise AND mask
            bool bitSet = (bitboard & (1ULL << square)) != 0;

            std::cout << (bitSet ? "1 " : ". ");
        }
        std::cout << "\n";
    }
    std::cout << "\n    A B C D E F G H\n\n";
}