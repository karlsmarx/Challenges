int absoluteValuesSumMinimization(std::vector<int> a) {
  std::vector<int> distances (a.size(), 0);

  for (int i = 0; i < a.size(); i++) {
    for (int j = i; j < a.size(); j++) {
      int absoluteDistance = std::abs(a[i] - a[j]);

      distances[i] += absoluteDistance;
      distances[j] += absoluteDistance;
    }
  }

  auto minElement = std::min_element(distances.begin(), distances.end());
  int minIndex = minElement - distances.begin();

  return a[minIndex];
}

