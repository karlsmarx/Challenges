int rangeBitCount(int a, int b) {
  int sum = 0;

  for (int i = b; i >= a; i--) {
    // For all number in range, sum if
    // the mod % 2 is one, what means that will be
    // in binary representation
    int localResult = i;
    while (localResult > 1) {
      int modResult = localResult % 2;
      sum += modResult;

      localResult = (localResult - modResult) / 2;
    }

    sum += localResult;
  }

  return sum;
}

