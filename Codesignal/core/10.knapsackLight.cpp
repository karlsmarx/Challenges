int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
  int sum = 0;

  if (weight1 <= maxW) {
    sum += value1;
  }

  if ((weight1 + weight2) <= maxW) {
    sum += value2;
  } else {
    if ((value2 > sum) && (weight2 <= maxW)) sum = value2;
  }

  return sum;
}

