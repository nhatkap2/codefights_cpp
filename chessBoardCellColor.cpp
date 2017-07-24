bool chessBoardCellColor(std::string cell1, std::string cell2) {
    return !(abs(cell1[0]-cell2[0] + cell1[1]-cell2[1])%2);
}
/*
Given two cells on the standard chess board, determine whether they have the same color or not.

Example

For cell1 = "A1" and cell2 = "C3", the output should be
chessBoardCellColor(cell1, cell2) = true.
*/
