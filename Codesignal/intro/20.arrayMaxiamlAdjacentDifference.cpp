int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int max = 0;

    for (int i = 1; i < inputArray.size(); i++) {
        int absoluteDifference = std::abs(inputArray[i] - inputArray[i - 1]);
        if (absoluteDifference > max) max = absoluteDifference;
    }

    return max;
}

