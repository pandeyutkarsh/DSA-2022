#include<bits/stdc++.h>
using namespace std;

// void print_map(std::unordered_map<K, V> const &m)
// {
//     for (auto it = m.cbegin(); it != m.cend(); ++it) {
//         std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
//     }
// }

int main(){

vector<int> arr = {4,4,5,2,1,3,6,8,5,5,6};

map<int,int> m;

for(auto i:arr){
    m[i]++;
}

map<int,int>::iterator itr;


 for (itr = m.begin(); itr != m.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }

// for(auto it = m.cbegin(); it != m.cend(); ++it)
// {
//  cout << it->first << " " << it->second.first << " " << it->second.second <<"\n";
// }

// for(int j = 0 ; j<m.size(); j++){
    // if(m.find(j) != m.end()) {
    //       cout<<m[j];
    //    }
    // cout<<m[j]<<" "<<m[j]<<endl;
// }

// print_map(m);

}
