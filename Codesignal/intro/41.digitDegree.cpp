int sumDigits(int number) {
  int sum = 0;

  while (number >= 10) {
    int digit = number % 10;

    sum += digit;
    number = (number - digit) / 10;
  }

  return sum + number;
}

int digitDegree(int n) {
  int i = 0;

  while (n >= 10) {
    n = sumDigits(n);
    i++;
  }

  return i;
}

