#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A, int X, int Y) {
    int N = A.size();
    
    int totalCost = 0;
    for (int i = 0; i < X; ++i) {
        totalCost += A[i];
    }
    
    int minCost = totalCost;
    
    for (int i = X; i < N; ++i) {
        totalCost = totalCost - A[i - X] + A[i];
        minCost = min(minCost, totalCost);
    }
    
    return minCost;
}