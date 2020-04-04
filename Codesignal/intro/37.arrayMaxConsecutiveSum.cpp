int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
  int max = 0;
  int lastSum = 0;

  // Do the first sum
  for (int i = 0; i < k; i++) {
    max += inputArray[i];
  }

  // Keep last sum result
  lastSum = max;

  for (int i = 1; i <= inputArray.size() - k; i++) {
    lastSum = lastSum - inputArray[i - 1] + inputArray[i + k - 1];

    if (lastSum > max) max = lastSum;
  }

  return max;
}

