int divisors(int n) {
  if (n == 1) return 1;

  int total = 0;
  for (int i = 2; i <= (n / 2); i++) {
    if ((n % i) == 0) ++total;
  }

  return total + 2;
}

std::vector<int> weakNumbers(int n) {
  int maxWeakness = 0;
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    int iDivisors = divisors(i);
    int iWeakness = 0;

    for (int j = 1; j < i; j++) {
      int jDivisors = divisors(j);
      if (jDivisors > iDivisors) ++iWeakness;
    }

    if (iWeakness == maxWeakness) ++sum;
    if (iWeakness > maxWeakness) {
      maxWeakness = iWeakness;
      sum = 1;
    }
  }

  return { maxWeakness, sum };
}

