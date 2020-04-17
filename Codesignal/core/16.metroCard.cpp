std::vector<int> metroCard(int lastNumberOfDays) {
  std::vector<int> result;

  if (lastNumberOfDays < 31) result.push_back(31); // The 30 days month and february
  if (lastNumberOfDays == 31) {
    result.push_back(28); // January
    result.push_back(30); // Other 31 months
    result.push_back(31); // December
  }

  return result;
}

