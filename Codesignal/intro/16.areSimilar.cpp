bool sum(std::vector<int> a, std::vector<int> b) {
    int sumA = 0;
    int sumB = 0;

    for (int i = 0; i < a.size(); i++) {
        sumA += a[i];
        sumB += b[i];
    }

    return sumA == sumB;
}

bool compare(std::vector<int> a, std::vector<int> b)
{
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    return a == b;
}

bool couldSwap(std::vector<int> a, std::vector<int> b) {
  int mismatchs = 0;

  // Search for elements to swap
  int swappedA;
  int swappedB;

  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
        mismatchs++;

        if (mismatchs > 2) return false;

        if (mismatchs == 1) {
            swappedA = a[i];
            swappedB = b[i];
        }
        
        if (mismatchs == 2) {
            // Test if could do one swap
            if (swappedA != b[i] || swappedB != a[i]) return false;
        }
    }
  }

  return true;
}

bool areSimilar(std::vector<int> a, std::vector<int> b) {
  // Check size of arrays
  if (a.size() != b.size()) return false;

  // Check for sum to otimize time
  bool sameSum = sum(a, b);
  if (!sameSum) return false;

  // Check for same elements
  bool sameElements = compare(a, b);
  if (!sameElements) return false;

  return couldSwap(a, b);
}

