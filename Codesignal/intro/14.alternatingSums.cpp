std::vector<int> alternatingSums(std::vector<int> a) {
  std::vector<int> sum (2, 0);

  for (int i = 0; i < a.size(); i++) {
      sum[i % 2] += a[i];
  }

  return sum;
}

