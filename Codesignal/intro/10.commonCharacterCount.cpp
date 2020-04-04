int commonCharacterCount(std::string s1, std::string s2) {
    int sum = 0;

    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            if (s1[i] == s2[j]) {
                sum++;

                s2.erase(j, 1);

                break;
            }
        }
    }

    return sum;
}

