int combinations(std::vector<int> b, int weight, int deep = 0) {
  if (deep > 2) return 0;

  int sum = 0;
  int char_sum = 0;

  for (int i = 0; i < b.size(); i++) {
    char_sum += b[i];

    if (char_sum == weight) {
      if ((i == (b.size() - 1)) && (deep == 2)) {
        sum += 1;
        continue;
      }

      if (deep < 2) {
        std::vector<int> subVector(b.cbegin() + i + 1, b.cend());
        int nextCombinations = combinations(subVector, weight, (deep + 1));

        sum += nextCombinations;
      }
    }
  }

  return sum;
}

int threeSplit(std::vector<int> a) {
  int sum = 0;
  
  int node_sum = 0;
  for (int i = 0; i < a.size(); i++) {
    node_sum += a[i];
  }
  
  int weight = node_sum / 3;  
  int total = combinations(a, weight);

  return total;
}

