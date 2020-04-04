int isIncreasing(std::vector<int> sequence, int k) {
    // Check direct for a given k not increasing the sorrounded values
    if (0 < k && k < sequence.size() - 1) {
        if (sequence[k - 1] >= sequence[k + 1]) {
            return k - 1;
        }
    }

    // Keep iterating after the position of wrong value.
    // If the value it`s greater than the next one, return the position
    // to check in sub-iterations.
    for (int i = k + 1; i < sequence.size() - 1; i++) {
        if (sequence[i] >= sequence[i + 1]) {
            return i;
        }
    }

    return -1;
}

bool almostIncreasingSequence(std::vector<int> sequence) {
    // To remove only one element and a array keep strictly increasing
    // the limit of a post element to be minor fromthe anterior is one.
    
    // Do the first check for all positions
    int firstRemove = isIncreasing(sequence, -1);

    // The sequence increases
    if (firstRemove == -1) {
        return true;
    } else {
        // Check for delete the returned index
        if (isIncreasing(sequence, firstRemove) == -1) {
            return true;
        }

        // If faills try to delete the next one
        if (isIncreasing(sequence, firstRemove + 1) == -1) {
            return true;
        }
    }

    return false;
}

