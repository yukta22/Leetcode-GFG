int maximumChocolatesHelper(int currRow, int c1, int c2, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp) {
    // Return 0 if current coordinates are not valid.
    if (currRow == grid.size() || c1 < 0 || c1 >= grid[0].size() || c2 < 0 || c2 >= grid[0].size() || c1 > c2) {
        return 0;
    }

    // If current state is already visited.
    if (dp[currRow][c1][c2] != -1) {
        return dp[currRow][c1][c2];
    }

    // Initializing the variable 'maximumChocolates'.
    int maximumChocolates = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            // Updating the variable 'maximumChocolates'.
            maximumChocolates = max(maximumChocolates, maximumChocolatesHelper(currRow + 1, c1 + i, c2 + j, grid, dp));
        }
    }

    // Condition when both of them are on same coordinate.
    if (c1 != c2) {
        maximumChocolates += grid[currRow][c2];
    }
    return dp[currRow][c1][c2] = (maximumChocolates + grid[currRow][c1]);
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, -1)));
    return maximumChocolatesHelper(0, 0, c - 1, grid, dp);
}
