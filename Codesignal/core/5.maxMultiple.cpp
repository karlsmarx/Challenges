int maxMultiple(int divisor, int bound) {
  for (int n = bound; n > 0; n--) {
    if (n % divisor == 0) return n;
  }
}

