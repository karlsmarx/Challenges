std::vector<int> replaceMiddle(std::vector<int> arr) {
  int middleIndex = std::floor(arr.size() / 2) - 1;

  int middleValue = arr[middleIndex];
  if (arr.size() % 2 == 0) {
    middleValue += arr[middleIndex + 1];
    arr.erase(arr.begin() + middleIndex + 1);
  }

  arr[middleIndex] = middleValue;

  return arr;
}

