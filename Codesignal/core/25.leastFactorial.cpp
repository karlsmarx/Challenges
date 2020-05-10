int leastFactorial(int n) {
  int value = 1;

  int count = 1;
  while(value < n) {
    value *= count;
    count++;
  }

  return value;
}

