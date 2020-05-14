int appleBoxes(int k) {
  int diff = 0;

  for (int i = 1; i <= k; i++) {
    if (i % 2 == 0) {
      diff += (i * i);
    } else {
      diff -= (i * i);
    }
  }

  return diff;
}

