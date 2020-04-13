int phoneCall(int min1, int min2_10, int min11, int s) {
  int limit = 0;

  // Check if couldn't call at least one minute
  if (s < min1) return 0;

  // Add the first minute and subtract the cost
  if (s >= min1) {
    limit++;
    s -= min1;
  }

  // Sum up where has credits the first ten minutes
  for (int i = 0; i < 9; i++) {
    if (s < min2_10) break;

    limit++;
    s -= min2_10;
  }

  // Count the rest of minutes if pay the first ten
  if (limit == 10) {
    while (s >= min11) {
      limit++;
      s -= min11;
    }
  }

  return limit;
}

