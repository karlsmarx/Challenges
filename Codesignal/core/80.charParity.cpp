string characterParity(char symbol) {
  int value = symbol - '0';

  if ((value < 0) || (value > 9)) return "not a digit";

  if (value % 2 == 0) {
    return "even";
  }

  return "odd";
}

