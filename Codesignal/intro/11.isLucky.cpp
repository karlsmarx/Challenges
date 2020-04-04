bool isLucky(int n) {
    std::vector<int> digits;

    // Get the last digit using module then update n to continue 
    // getting use same division
    while(n >= 10) {
        int digit = n % 10;
        printf("%d", digit);
        digits.push_back(digit);
        n = (n - digit) / 10;
    }

    digits.push_back(n); // Push the last digit

    int firstSum = 0;
    int secondSum = 0;

    for(int i = 0; i < digits.size() / 2; i++) {
        firstSum += digits[i];
        secondSum += digits[digits.size() - i - 1];
    }

    return firstSum == secondSum;
}

