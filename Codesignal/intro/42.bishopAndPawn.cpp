bool bishopAndPawn(std::string bishop, std::string pawn) {
  // Check if it`s in same vertical
  if (bishop[0] == pawn[0]) return false;

  // Check if it`s in same horizontal
  if (bishop[1] == pawn[1]) return false;

  // Check if the space between letters and numbers are equal
  if (abs(bishop[0] - pawn[0]) == abs(bishop[1] - pawn[1])) return true;

  return false;
}

