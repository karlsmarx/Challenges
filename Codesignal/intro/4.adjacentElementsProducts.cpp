int adjacentElementsProduct(std::vector<int> inputArray) {
    int max = 0;

    for (int i = 0; i < inputArray.size() - 1; i++) {
        int product = inputArray[i] * inputArray[i + 1];
        if (product > max || max == 0) {
            max = product;
        }
    }

    return max;
}

