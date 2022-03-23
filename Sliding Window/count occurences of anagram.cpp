#include<bits/stdc++.h>
using namespace std;

int main(){

    string ptr = "aaba";
    string str = "aabaabaa";
   unordered_map<char, int> m;
    int k = ptr.length();
    for(int i=0;i<ptr.length();i++){
        m[ptr[i]]++;
    }

    // for(auto i: ptr){
    //    m[i]++;
    // }

    int i = 0;
    int j = 0;
    int ans = 0,count = m.size();
    // cout<<m['a'];
    // cout<<m['b'];
 while(j < str.length()){

   if(m.find(str[j]) != m.end()) {
      m[str[j]]--;
   }

    if(m[str[j]]==0){
        count--;
    }

    if(j-i+1 < k){
        j++;
    }else if(j-i+1 == k){
        if(count == 0){
            ans++;
        }

       if(m.find(str[i]) != m.end()) {
          m[str[i]]++;
       }
        if(m[str[i]] == 1 ){
        count++;
    }

        i++;
        j++;
    }

 }

cout<<ans<<endl;


    // cout<<ptr[0];



}
