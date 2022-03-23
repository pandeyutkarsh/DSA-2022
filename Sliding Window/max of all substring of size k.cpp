#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1,-1};
 vector<int> ans;
 list<int> l;
 int i=0, j = 0;
 int mx = INT_MIN;
 int k = 1;
 while(j < arr.size()){
 
  while(l.size() > 0 && l.back() < arr[j] ){
      l.pop_back();
   }

   l.push_back(arr[j]);

  if(j-i+1 < k){
      j++;
  }else if(j-i+1 == k){
      ans.push_back(l.front());
      if(arr[i] == l.front()){
          l.pop_front();
      }
      i++;
      j++;
  }


 }

  for(auto i:ans){
      cout << i <<" ";
  }

}
