bool chessBoardCellColor(std::string cell1, std::string cell2) {
  int letterOne = (int) cell1[0] % 2;
  int numberOne = (int) cell1[1] % 2;

  int letterTwo = (int) cell2[0] % 2;
  int numberTwo = (int) cell2[1] % 2;

  // Get the color (black or white) based on combination of odd and even
  string color1 = (letterOne == numberOne) ? "black" : "white";
  string color2 = (letterTwo == numberTwo) ? "black" : "white";

  return color1 == color2;
}

