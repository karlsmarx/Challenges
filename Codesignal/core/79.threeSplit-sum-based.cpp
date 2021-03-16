int combinations(std::vector<int> strip, int weight) {
  int answer = 0;

  int countVector[strip.size()] = {0};
  int subSum = 0;

  for (int i = (strip.size() - 1); i >= 0; i--) {
    subSum += strip[i];

    if (subSum == weight) {
      countVector[i] = 1;
    }
  }

  for (int j = (strip.size() - 2); j >= 0; j--) {
    countVector[j] += countVector[j + 1];
  }

  subSum = 0;
  for (int k = 0; (k + 2) < strip.size(); k++) {
    subSum += strip[k];
    if (subSum == weight) answer += countVector[k + 2];
  }

  return answer;
}

int threeSplit(std::vector<int> strip) {
  int sum = 0;

  long node_sum = 0L;
  for (int i = 0; i < strip.size(); i++) {
    node_sum += (long)strip[i];
  }

  if (node_sum % 3 != 0) return 0;

  int weight = node_sum / 3;
  int total = combinations(strip, weight);

  return total;
}

