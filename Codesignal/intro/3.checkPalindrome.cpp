bool checkPalindrome(std::string inputString) {
    int length = inputString.length();

    int i = 0;
    int j = length - 1;

    bool isPalindrome = true;

    while (i <= j) {

        if (inputString[i] != inputString[j]) {
            isPalindrome = false;
            break;
        }

        i++;
        j--;
    }

    return isPalindrome;
}

