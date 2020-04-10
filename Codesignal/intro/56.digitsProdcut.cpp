int digitsProduct(int product) {
  int number = 0;
  std::stack<int> digits;

  if (product == 0) return 10;
  if (product < 10) return product;

  for (int i = 9; (i > 1) && (product > 1); i--) {
    while (product % i == 0)
    {
      digits.push(i);
      product = product / i;
    }
  }

  // Couldn't decompose, product isPrime
  if (product != 1) return -1;

  while (!digits.empty()) 
  { 
    number = number * 10 + digits.top();
    digits.pop();
  } 

  return number;
}

