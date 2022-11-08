#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> V(n), D;
    std::set<int> Set_V;
    std::map<int, int> m;
    for (int i = 0; i < n; ++i) {
        std::cin >> V[i];
        Set_V.insert(V[i]);
    }
    int mini = 1000000;
    for (int j = 0; j < n; ++j){
        m[V[j]] = j;
    }
    std::map<int, int> ordered(m.begin(), m.end());
    for (int j = 0; j < n; ++j){
        if (m.at(V[j]) < mini) {
            mini = m.at(V[j]);
            D.push_back(V[j]);
        }
    }
    std::cout << D[D.size() - 1];
}