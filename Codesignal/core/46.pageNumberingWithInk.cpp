// Could be do it with math in o(1), but i dont have time

int pagesNumberingWithInk(int current, int numberOfDigits) {
  int numberDigits = std::floor(std::log(current) / std::log(10)) + 1;
  if (numberDigits > numberOfDigits) return current - 1;

  while (numberDigits <= numberOfDigits) {
    numberOfDigits -= numberDigits;
    ++current;
    numberDigits = std::floor(std::log(current) / std::log(10)) + 1;
  }

  return current - 1;
}

