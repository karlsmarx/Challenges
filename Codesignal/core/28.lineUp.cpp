int lineUp(std::string commands) {
  int sum = 0;

  int studentA = 0; // Keep the direction of the student that know the direction
  int studentB = 0; // Keep the direction of the one that can't
  for (int i = 0; i < commands.size(); i++) {
    if (commands[i] == 'L') {
      studentA++;
      studentB--;
    }

    if (commands[i] == 'R') {
      studentA--;
      studentB++;
    }

    if (commands[i] == 'A') {
      studentA += 2;
      studentB += 2;
    }

    // Use module of four to get the direction and compare
    int remainderA = studentA % 4;
    int aPoint = (remainderA < 0 ? remainderA + 4 : remainderA);

    int remainderB = studentB % 4;
    int bPoint = (remainderB < 0 ? remainderB + 4 : remainderB);

    if (aPoint == bPoint) ++sum;
  }

  return sum;
}

