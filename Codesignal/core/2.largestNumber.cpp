int largestNumber(int n) {
  int sum = 0;

  while (n > 0) {
    sum += 9 * (std::pow(10, n - 1));

    n--;
  }

  return sum;
}

