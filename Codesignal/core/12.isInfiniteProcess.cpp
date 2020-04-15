bool isInfiniteProcess(int a, int b) {
  if (a > b) return true;
  if (((b - a) % 2) == 1) return true;

  return false;
}

