#include <bits/stdc++.h>
using namespace std;

int main(){

    int i = 0 , j = 0 , sum = 0 , mx = INT_MIN;
    vector<int> arr = {4,1,1,1,2,3,5};
    int n = arr.size();
    int k = 5;

    while(j < n){
       
       sum = sum + arr[j];
        if(sum < k){
            j++;

        }else if(sum == k){
            mx = max(mx,(j-i+1));
            j++;
        }else if(sum > k){
            while(sum > k){
                sum = sum - arr[i];
                i++;
            }
         j++;
        }
    }
    cout<<"\n";
    cout<<mx<<endl;
}
