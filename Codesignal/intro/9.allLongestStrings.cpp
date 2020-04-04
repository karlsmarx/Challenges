std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    int longestSize = 0;
    std::vector<std::string> result;

    for (int i = 0; i < inputArray.size(); i++) {
        if (inputArray[i].size() > longestSize) {
            result.clear(); // Erase all array
            result.push_back(inputArray[i]);

            longestSize = inputArray[i].size();
            continue;
        }

        if (inputArray[i].size() == longestSize) {
            result.push_back(inputArray[i]);
        }
    }

    return result;
}

