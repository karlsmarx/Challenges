int binarySearchForMinor(std::vector<int> v, int element) {
  int base = std::floor(v.size() / 2);
  int idx = base;
  
  while (base > 0) {
    if (v[idx] == element) return idx;

    base = std::floor(base / 2);
    
    if (v[idx] > element) idx -= base;
    if (v[idx] < element) idx += base;
  }
  
  return idx;
}

int minimalNumberOfCoins(std::vector<int> coins, int price) {
  // Has the guarantee that return at least the first minor value
  int betterIndex = binarySearchForMinor(coins, price);
  if ((betterIndex < (coins.size() - 1)) && (coins[betterIndex + 1] < price)) {
    ++betterIndex;
  }

  int sum = 0;
  while (price > 0) {
    int rest = price % coins[betterIndex];
    if (rest == price) {
      --betterIndex;
      continue;
    }

    sum += (price - rest) / coins[betterIndex];
    price = rest;
  }
  
  return sum;
}

