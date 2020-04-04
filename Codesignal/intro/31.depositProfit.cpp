int depositProfit(int deposit, int rate, int threshold) {
  // Using compound tax derivation
  float tax = 1 + (rate / 100.0f);

  double numerator = std::log((float) threshold / deposit);
  double denominator = std::log(tax);

  return std::ceil(numerator / denominator);
}

