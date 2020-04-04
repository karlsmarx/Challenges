std::vector<int> sortByHeight(std::vector<int> a) {
    // The simplest bubble sort
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == -1) {
            continue;
        }

        for (int j = 0; j < i; j++) {
            if (a[j] > a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    return a;
}

