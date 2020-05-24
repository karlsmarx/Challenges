bool isPower(int n) {
  if (n == 1) return true;

  for(int i = 2; i <= (n / 2); i++) {
    double m = std::log(n) / std::log(i);

    // Check if its integer
    double diff = m - std::trunc(m);
    if (diff < 100 * std::numeric_limits<double>::epsilon()) {
      return true;
    }
  }
  
  return false;
}

