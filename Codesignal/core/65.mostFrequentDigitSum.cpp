int digitsSum(int n) {
  int sum = 0;
  
  while (n >= 10) {
    int digit = n % 10;
    sum += digit;
    n = (n - digit) / 10;
  }
  
  sum += n;
  
  return sum;
}

int mostFrequentDigitSum(int n) {
  std::map<int, int> frequence;
  frequence[0] = 1;

  while (n > 0) {
    int dSum = digitsSum(n);
    
    if (!frequence[dSum]) frequence[dSum] = 0;
    ++frequence[dSum];
    
    n -= dSum;
  }
  
  int max = 0;
  int index = 0;
  
  for (auto const& [key, val] : frequence) {
    cout << key << " " << val << endl;
    if (val > max) {
      max = val;
      index = key;
    }
    
    if ((val == max) && (key > index)) index = key;
  }
  
  return index;
}

