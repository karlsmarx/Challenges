int rounders(int n) {
  int i = 1;

  while (pow(10, i) < n) {
    int digit = n % (int)pow(10, i);
    n -= digit;

    cout << n << " " << (int)pow(10, i) << " " << digit << endl;

    if (digit > (4 * pow(10, i - 1))) n += (int)pow(10, i);

    i++;
  }

  return n;
}

