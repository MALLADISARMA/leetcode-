#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];cout<<" ";
    }
    cout<<endl;
    int target;
    cout<<"enter target element: "<<endl;
    cin>>target;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(target==a[i]){
            cout<<i<<endl;
        }
        else{
            a.push_back(target);
            sort(a.begin(),a.end());
            for(int i=0;i<a.size();i++){
                if(target==a[i])
                cout<<i<<endl;
            }
        }
    }
    return 0;
    

}