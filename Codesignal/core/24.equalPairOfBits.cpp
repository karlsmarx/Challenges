int equalPairOfBits(int n, int m) {
  return pow(2, log2((~(n ^ m)) & -(~(n ^ m))));
}

