int makeArrayConsecutive2(std::vector<int> statues) {
    int min = statues[0];
    int max = statues[0];

    // Get the minumum and the maz size od statues
    for (int i = 1; i < statues.size(); i++) {
        if (statues[i] < min) {
            min = statues[i];
        }

        if (statues[i] > max) {
            max = statues[i];
        }
    }

    // The difference between min and max is the desired number of statuesminus one
    // then subtract the number thats already have to get the number of needed,
    // doesn`t matter the size of each one
    return (max - min) - statues.size() + 1;
}

