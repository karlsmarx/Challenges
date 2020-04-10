int addTwoDigits(int n) {
  int firstDigit = n % 10;
  return firstDigit + ((n - firstDigit) / 10);
}

