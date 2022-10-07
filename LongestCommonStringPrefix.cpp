#include<iostream>
#include<algorithm>
using namespace std;

string LongestStringPrefix(string arr[], int n){

    if(n == 0){
        return "";
    }

    if(n == 1){
        return arr[0];
    }

    sort(arr, arr + n);

    int minlen = min(arr[0].size(), arr[n-1].size());

    string first = arr[0];
    string last = arr[n-1];

    int i = 0;

    while(i < minlen && first[i] == last[i]){
        i++;
    }

    string prefix = first.substr(0, i);
    return prefix;
    
}

int main(){

    int n; cin>>n;

    string arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<LongestStringPrefix(arr, n)<<endl;

    
    return 0;
}