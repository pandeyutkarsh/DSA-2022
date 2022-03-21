#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    int mx = INT_MIN;
    int sum = 0,k=2;
    int i=0,j=0;

    while(j < n){
        sum = sum + arr[j];

        if((j-i+1) < k){
            j++;

        }else if((j-i+1) == k){
            mx = max(sum,mx);
            sum -= arr[i];
            i++;
            j++;
        }
    }

    cout<<mx;
    cout<<"\n";
}
