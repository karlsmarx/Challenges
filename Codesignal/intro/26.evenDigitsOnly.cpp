bool evenDigitsOnly(int n) {
  while (n >= 10) {
    int digit = (n % 10);
    
    if (digit % 2 != 0) return false;

    n = (n - digit) / 10;
  }

  if (n % 2 != 0) return false;

  return true;
}

