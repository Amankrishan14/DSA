#include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int solution(vector<int> &A, int N, int X, int Y) {
//     int totalCost = 0;
//     for (int i = 0; i < X; ++i) {
//         totalCost += A[i];
//     }
    
//     int minCost = totalCost;
    
//     for (int i = X; i < N; ++i) {
//         totalCost = totalCost - A[i - X] + A[i];
//         minCost = min(minCost, totalCost);
//     }
    
//     return minCost;
// }

// int main() {
//     int A[] = {4, 2, 3, 7};
//     int X = 2;
//     int Y = 2;
//     int N = sizeof(A) / sizeof(A[0]);
    
//     vector<int> inputArray(A, A + N);
    
//     int result = solution(inputArray, N, X, Y);
//     cout << "Minimum cost: " << result << endl; // Output: 7
    
//     return 0;
// }