#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>  // Include this header for the remove function

using namespace std;

int solution(int N, vector<int> &A, vector<int> &B) {
    vector<vector<int>> adjList(N);
    
    for (int i = 0; i < A.size(); ++i) {
        adjList[A[i]].push_back(B[i]);
        adjList[B[i]].push_back(A[i]);
    }
    
    queue<int> q;
    for (int i = 0; i < N; ++i) {
        if (adjList[i].size() <= 1) {
            q.push(i);
        }
    }
    
    int time = 0;
    
    while (!q.empty()) {
        queue<int> next_q;
        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            
            for (int neighbor : adjList[vertex]) {
                if (adjList[neighbor].size() > 1) {
                    adjList[neighbor].erase(remove(adjList[neighbor].begin(), adjList[neighbor].end(), vertex), adjList[neighbor].end());
                    if (adjList[neighbor].size() <= 1) {
                        next_q.push(neighbor);
                    }
                }
            }
        }
        q = next_q;
        time++;
    }
    
    return time;
}

int main() {
    vector<int> A = {0, 1, 2, 1, 4, 4};
    vector<int> B = {1, 2, 0, 4, 5, 6};
    cout << solution(7, A, B) << endl;  // Output: 2
    
    A = {0, 1, 2, 4, 5};
    B = {1, 2, 3, 5, 6};
    cout << solution(7, A, B) << endl;  // Output: 2
    
    A = {0, 1, 2, 3};
    B = {1, 2, 3, 0};
    cout << solution(4, A, B) << endl;  // Output: 0
    
    A = {0, 1, 2};
    B = {1, 2, 0};
    cout << solution(4, A, B) << endl;  // Output: 1
    
    return 0;
}
