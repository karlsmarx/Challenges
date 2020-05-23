int makeArrayConsecutive2(std::vector<int> statues) {
  std::sort(statues.begin(), statues.end());

  int sum = 0;
  for (int i = 1; i < statues.size(); i++) {
    sum += statues[i] - statues[i - 1] - 1;
  }

  return sum;
}

