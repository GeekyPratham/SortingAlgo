// in this code we are merging two different array which is already prsent in sorted order
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0; //a
    int j=0; //b
    int k=0; //res
   
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            // res[k]=a[i];
            // i++;
            // k++;
            //use of post increment first print then increase
            res[k++]=a[i++];
        }
        else{
            res[k]=b[j];
            j++;
            k++;
        }
    }
     if(i==a.size()){ //a is at end
        while(j<b.size()){
            res[k]=b[j];
            
            j++;
            k++;
        }
        
    }
    if(j==b.size()){ // b is at end
        while(i<a.size()){
            res[k]=a[i];
            
            i++;
            k++;
        }
        
    }

}
int main(){
    int arr[]= {1,4,5,8};
    int m = sizeof(arr)/sizeof(arr[0]);
    
    int brr[]= {2,3,6,7,10,12};

    int n = sizeof(brr)/sizeof(brr[0]);
    // new method to store array element in vector without using push_back;
    vector<int> a(arr,arr+m);
    vector<int> b(brr,brr+n);
    vector<int> res(m+n);
    
    merge(a,b,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}