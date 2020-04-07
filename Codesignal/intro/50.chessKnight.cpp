int chessKnight(std::string cell) {
  int sum = 0;

  int letter = cell[0] - 96;
  int number = cell[1] - 48;

  if (letter + 1 <= 8) {
    if (number + 2 <= 8) sum++;
    if (number - 2 > 0) sum++;

    if (letter + 2 <= 8) {
      if (number + 1 <= 8) sum++;
      if (number - 1 > 0) sum++;
    }
  }

  if (letter - 1 > 0) {
    if (number + 2 <= 8) sum++;
    if (number - 2 > 0) sum++;

    if (letter - 2 > 0) {
      if (number + 1 <= 8) sum++;
      if (number - 1 > 0) sum++;
    }
  }

  return sum;
}

