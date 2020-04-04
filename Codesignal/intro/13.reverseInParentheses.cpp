std::string reverseInParentheses(std::string inputString) {
    // Search for the most internal parentheses position
    int fOpen = inputString.find_last_of("(");

    while(fOpen != -1) {
        int closeAt = inputString.find_first_of(")", fOpen);
        int length = closeAt - fOpen;

        string str = inputString.substr(fOpen + 1, length - 1);
        reverse(str.begin(), str.end());

        inputString.replace(fOpen, length + 1, str);
        fOpen = inputString.find_last_of("(");
    }

    return inputString;
}

