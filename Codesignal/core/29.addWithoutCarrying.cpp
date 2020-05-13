int additionWithoutCarrying(int param1, int param2) {
  int sum = 0;

  int i = 1;
  while ((param1 > 0) || (param2 > 0)) {
    int base = pow(10, i);

    int column1 = param1 % base;
    int column2 = param2 % base;

    sum += ((column1 + column2) % base);

    param1 -= column1;
    param2 -= column2;

    i++;
  }

  return sum;
}

