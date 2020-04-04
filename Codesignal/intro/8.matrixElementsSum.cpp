int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int sum = 0;

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            // Sum all first line, the rooftop
            if (i == 0) {
                sum = sum + (matrix[i][j]);
            } else {
                // Check below rooms and if had a ghost set to 0 for
                // subsequent checks
                if (matrix[i - 1][j] == 0) {
                    matrix[i][j] = 0;
                } else {
                    sum += matrix[i][j];
                }
            }
        }
    }

    return sum;
}

