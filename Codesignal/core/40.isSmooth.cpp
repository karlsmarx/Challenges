bool isSmooth(std::vector<int> arr) {
  if (arr[0] != arr[arr.size() - 1]) return false;

  int middleIndex = std::floor(arr.size() / 2) - 1;

  if (arr.size() % 2 == 1) {
    middleIndex += 1;
    if (arr[0] != arr[middleIndex]) return false;
  } else {
    int middleValue = arr[middleIndex] + arr[middleIndex + 1];
    if (arr[0] != middleValue) return false;
  }

  return true;
}

