#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<char> arr = {'a', 'a', 'b', 'a', 'c','b','e','b','e','b','e'};
    int n = arr.size();

    map<char,int> m;


    int i=0,j=0,size=0,mx=INT_MIN;
   
  int k = 3;
    while(j<n){

     m[arr[j]]++;

     if(m.size() < k){
         j++;
     }else if( m.size() == k){

      mx = max(mx,(j-i+1));
      j++;

     }else if(m.size() > k){
         
       while(m.size() > k){
           
           m[arr[i]]--;
           if(m[arr[i]] < 1){
           m.erase(arr[i]);
       }
           i++;

       }
       j++;
       
     }

    }

    cout<<"\n"<<mx<<"\n";
}
