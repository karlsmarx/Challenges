int sumDigits(int number) {
  int sum = 0;

  while (number >= 10) {
      int digit = (number % 10);
      sum += digit;
      number = (number - digit) / 10;
  }

  sum += number;

  return sum;
}

bool confortable(int a, int b) {
  if (a == b) return false;

  int digitsValue = sumDigits(a);

  if ((b >= (a - digitsValue)) && (b <= (a + digitsValue))) return true;

  return false;
}

int comfortableNumbers(int l, int r) {
  int sum = 0;

  int n = l;
  while (n <= r) {
    for (int i = n + 1; i <= r; i++) {
      if (confortable(n, i) && confortable(i, n)) {
        ++sum;
      }
    }

    ++n;
  }

  return sum;
}

