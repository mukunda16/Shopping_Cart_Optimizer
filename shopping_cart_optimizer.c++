#include <iostream>
using namespace std;

// Function to solve 0/1 Knapsack
int knapsack(int n, int capacity, int weights[], int values[]) {
    int dp[100][100];

    // Initialize DP table
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(
                    values[i - 1] + dp[i - 1][w - weights[i - 1]],
                    dp[i - 1][w]
                );
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][capacity];
}

int main() {
    int n, capacity;

    cout << "Enter number of items: ";
    cin >> n;

    int weights[n], values[n];

    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    cout << "Enter values of items:\n";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    cout << "Enter maximum budget (capacity): ";
    cin >> capacity;

    int result = knapsack(n, capacity, weights, values);

    cout << "\nMaximum value you can get = " << result << endl;

    return 0;
}