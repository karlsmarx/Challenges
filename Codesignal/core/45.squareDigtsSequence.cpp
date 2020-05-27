int find (std::vector<int> values, int n) {
  for (int i = 0; i < values.size(); i++) {
    if (values[i] == n) return i;
  }

  return -1;
}

int squareDigitsSequence(int a0) {
  if (a0 < 2) return 2;

  std::vector<int> results = { a0 };
  int found = -1;

  do {
    int sum = 0;

    int value = results[results.size() - 1];
    while (value) {
      int digit = value % 10;
      sum += (digit * digit);

      value = (value - digit) / 10;
    }

    found = find(results, sum);
    results.push_back(sum);
  } while(found == -1);

  return results.size();
}

