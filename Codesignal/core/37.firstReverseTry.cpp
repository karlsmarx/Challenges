std::vector<int> firstReverseTry(std::vector<int> arr) {

  if (arr.size() > 1) {
    int temp = arr[0];

    arr[0] = arr[arr.size() - 1];
    arr[arr.size() - 1] = temp;
  }
  return arr;
}

