// Be careful for long inputs, maybe the number type need to be different

int countBlackCells(int n, int m) {
  double slope = n / (double)m;

  long sum = m;
  sum += n - 1;

  for (int i = 1; i < m; i++) {
    if (remainderl((slope * i), 1) == 0) sum++;
  }

  return sum;
}

