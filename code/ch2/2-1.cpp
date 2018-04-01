//MergeInsertionSort
#include <iostream>
#include <vector> 
#include "2.1-1.cpp"
#include "2.3-1.cpp"
using namespace std;

void MergeInsertionSort(vector<int> &vec, int p, int r, int k){
    int mid;
    if(p<r){
	    mid =(int)((p+r)/2);
        if(mid-p+1<k){
            InsertionSort(vec, p, mid);
        }else{
            MergeInsertionSort(vec, p, mid, k);
        }
        if(r-mid<k){
            InsertionSort(vec, mid+1, r);
        }else{
            MergeInsertionSort(vec, mid+1, r, k);
        }
        Merge(vec, p, mid, r);
    }
}
//Test function: MergeInsertionSort
/*int main(){
	vector<int> vec={31, 41, 59, 26, 47, 58, 21, 43, 55, 78, 34, 67, 12, 87, 43, 32, 90, 101, 234};
	MergeInsertionSort(vec, 0, vec.size()-1, 3);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
	return 0;
}*/


