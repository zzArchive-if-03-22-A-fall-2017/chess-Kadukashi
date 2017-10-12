#include "shortcut.h"
#include "test_chess.h"

int main(int argc, char *argv[])
{
  ADD_TEST(test_is_piece);
  ADD_TEST(test_init_chess_board);
  ADD_TEST(test_get_square);
  ADD_TEST(test_is_square_occupied);
  ADD_TEST(test_add_piece);
  ADD_TEST(test_get_piece);
  ADD_TEST(test_setup_chess_board);
  ADD_TEST(test_remove_piece);
  ADD_TEST(test_squares_share_file);
  ADD_TEST(test_squares_share_rank);
  ADD_TEST(test_squares_share_diagonal);
  ADD_TEST(test_squares_share_knights_move);
  ADD_TEST(test_squares_share_pawns_move);
  ADD_TEST(test_squares_share_queens_move);
  ADD_TEST(test_squares_share_kings_move);

  run_tests();
  return 0;
}
