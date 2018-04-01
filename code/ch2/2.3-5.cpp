#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int BinarySearch(vector<int> &vec, int start, int end, int v){
    int mid, res;
    if(start>end){
        return -1;
    }

    mid = (int)((start+end)/2);
    if(vec[mid]==v){
        res = mid;
    }else if(vec[mid]>v){
        res = BinarySearch(vec, start, mid-1, v);
    }else{
        res = BinarySearch(vec, mid+1, end, v);
    }

    return res;
}


/*// Test function BinarySearch
int main(){
    int v, index;
    vector<int> vec={3, 41, 52, 55, 58, 67, 99, 149};
    cout<<"Please enter an number: "<<endl;
    cin>>v;
    index = BinarySearch(vec, 0, vec.size()-1, v);
    cout<<index<<endl;
    return 0;
}*/