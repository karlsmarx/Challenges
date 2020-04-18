int killKthBit(int n, int k) {
  return (n & ~(1UL << (k - 1))) | (0 << (k - 1));
}

