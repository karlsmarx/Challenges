bool palindromeRearranging(std::string str) {
    // Check for simple strings
    if (str.size() < 2) return true;

    // String with length 2 must to have same chars
    if (str.size() == 2) {
        return std::count(str.begin(), str.end(), str[0]) == 2;
    }

    // Check if count of chars is the length of string
    if (std::count(str.begin(), str.end(), str[0]) == str.size()) return true;

    // If string has even number of chars, all chars must to occur
    // a even number of times too. Else, if has a odd, only one char
    // could occur a odd number of times.
    if (str.size() % 2 == 0) {
        for (int i = 0; i < str.size(); i++) {
            int charCount = std::count(str.begin(), str.end(), str[i]);
            if (charCount % 2 != 0) return false;
        }
    } else {
        int oddOccurs = 0;
        char firstOdd;

        for (int i = 0; i < str.size(); i++) {
            int charCount = std::count(str.begin(), str.end(), str[i]);

            if ((charCount % 2) == 1 && str[i] != firstOdd) {
                std::cout << charCount << endl;
                firstOdd = str[i];
                oddOccurs++;
            }

            if (oddOccurs > 1) return false;
        }
    }

    return true;
}

