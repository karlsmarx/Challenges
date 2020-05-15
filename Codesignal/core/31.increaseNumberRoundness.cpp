bool increaseNumberRoundness(int n) {
  while (n > 0) {
    int digit = n % 10;

    if (digit != 0 && digit < n) {
      int nextDigit = ((n - digit) % 100);
      cout << n << " " << digit << " " << nextDigit << endl;
      if (nextDigit == 0) return true;
    }

    n = (n - digit) / 10;
  }
  
  return false;
}

