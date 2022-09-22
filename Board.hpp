//---------------------------------------------------------------------------------------------------------------------
// Board.hpp
//
// Board is the class which represent the terminal output.
//
// Author: Boris Smiljanic, 01531652
//         Milan Mirosav, 11731475
//         Markus Doppelreiter, 01535331
//---------------------------------------------------------------------------------------------------------------------
//

#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <vector>

#include "Tile.hpp"

class Board
{
public:
  //-------------------------------------------------------------------------------------------------------------------
  /// Returns an instance of the Board class (Singleton pattern).
  //
  static Board& getInstance();

  //-------------------------------------------------------------------------------------------------------------------
  /// Deleted copy constructor.
  //
  Board(const Board& copy) = delete;

  //-------------------------------------------------------------------------------------------------------------------
  /// Deleting assignment operator
  ///
  //
  Board& operator= (const Board &board) = delete;

  //-------------------------------------------------------------------------------------------------------------------
  /// Prints the board.
  ///
  //
  void printBoard();

  //-------------------------------------------------------------------------------------------------------------------
  /// Prints the free tile.
  ///
  //
  void printFreeTile();

private:
  //-------------------------------------------------------------------------------------------------------------------
  /// Constructor definition
  ///
  Board();

  //-------------------------------------------------------------------------------------------------------------------
  /// Destructor definition
  ///
  ~Board();

  //-------------------------------------------------------------------------------------------------------------------
  /// Prints the tile with arrow.
  ///
  //
  void printTileOnBoard();

  //-------------------------------------------------------------------------------------------------------------------
  /// Indicates a vector of pointers to board tiles.
  //
  std::vector<std::vector<Tile*>>* board_tiles_;

  //-------------------------------------------------------------------------------------------------------------------
  /// Indicates a vector of all created players.
  //
  std::vector<Player*> players_;
};

#endif // BOARD_HPP