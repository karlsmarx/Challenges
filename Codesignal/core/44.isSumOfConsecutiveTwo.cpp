// Use soluiton from Geeks For Geeks

int isSumOfConsecutive2(int n) {
  int sum = 0;

  for (int l = 1; (l * (l + 1)) < (2 * n); l++) {
    float a = (1.0 * n - (l * (l+ 1) / 2)) / (l + 1);
    if (std::trunc(a) == a) ++sum;
  }

  return sum;
}

