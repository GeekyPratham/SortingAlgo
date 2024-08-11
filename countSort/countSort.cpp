#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        mx=max(mx,num);
        arr.push_back(num);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    vector<int> freq(mx+1,0);
    for(int i=0;i<arr.size();i++){
        int temp = arr[i];
        freq[temp] = freq[temp]+1;
    }
    for(int i=0;i<freq.size();i++){
        cout<<freq[i]<<" ";
    }
    cout<<endl;

    vector<int> pSum(mx+1, 0); 
    pSum[0] = 0;
    for (int i = 1; i < freq.size(); i++) {
        pSum[i] = pSum[i - 1] + freq[i];
    }

    for(int i=0;i<pSum.size();i++){
        cout<<pSum[i]<<" ";
    }
    cout<<endl;


    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        int temp = arr[i];
        pSum[temp] = pSum[temp] - 1;

        ans[pSum[temp]] = temp;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}