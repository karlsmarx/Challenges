int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
  int max = 0;

  if (weight1 <= maxW) {
    max = value1;

    if ((weight1 + weight2) <= maxW) {
      return (value1 + value2);
    }
  }

  if ((weight2 <= maxW) && (value2 > max)) {
    return value2;
  }

  return max;
}

