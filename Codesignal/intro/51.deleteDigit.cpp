int deleteDigit(int n) {
  int max = 0;

  int i = 0;
  do {
    int a = std::pow(10, i + 1);
    int b = std::pow(10, i);

    int result = (n - (n % a)) / 10 + n % b;
    if (result > max) max = result;

    i++;
  } while(std::pow(10, i) < n);

  return max;
}

