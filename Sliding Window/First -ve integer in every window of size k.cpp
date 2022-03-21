#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1,-2,-3,4,-5,6};
    vector<int> ans;
    int n = arr.size();
    int mx = INT_MIN;
    int sum = 0,k=2;
    int i=0,j=0;
    
    while(j < n){
        if(arr[j] < 0){
            ans.push_back(arr[j]);
        }

        if((j-i+1) < k){
            j++;

        }else if((j-i+1) == k){
            cout<<ans[0];
            if(arr[i] == ans[0]){
                ans.erase(ans.begin());
            }
        
            i++;
            j++;
        }
    }
    cout<<"\n";
}
