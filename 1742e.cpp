//Работает правильно, но с ограничением по времени
#include <iostream>
#include <vector>

int main(){
    long long t, n, q;
    std::cin >> t;
    while (t --){
        std::cin >> n >> q;
        std::vector<long long> n_i(n);
        std::vector<long long> q_i(q);
        for (int i = 0; i < n; ++i)
            std::cin >> n_i[i];
        for (int i = 0; i < q; ++i)
            std::cin >> q_i[i];
        std::vector<long long> V;
        for (int i = 0; i < q_i.size(); ++i){
            long long sum = 0;
            for (int j = 0; j < n_i.size(); ++j){
                if(q_i[i] >= n_i[j]) {
                    sum += n_i[j];
                }
                else
                    break;
            }
            V.push_back(sum);
        }
        for (int i = 0; i < V.size(); ++i)
            std::cout << V[i] << " ";
        std::cout << '\n';
    }
}
