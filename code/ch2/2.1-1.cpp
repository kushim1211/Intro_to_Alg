//InsertionSort
#include <iostream>
#include <vector>
using namespace std;

/*void InsertionSort(vector<int> &vec){
	int i, j, tmp;
	for(i=0;i<vec.size()-1;i++){
        j=i;tmp=vec[i+1];
        while(j>=0 && vec[j]>tmp){
        	vec[j+1]=vec[j];
        	j--;
        }
        vec[j+1]=tmp;
	}
}*/

void InsertionSort(vector<int> &vec, int p, int r){
	for(int j=p;j<r+1;j++){
		int tmp=vec[j];
		int k = j-1;
		while(k>=p && vec[k] > tmp){
			vec[k+1]=vec[k];
			k--;
		}
		vec[k+1]=tmp;
	}
}

// Test function:InsertionSort
/*int main(){
	vector<int> vec={31, 41, 59, 26, 47, 58, 21, 43, 55, 78};
	InsertionSort(vec, 0, vec.size()-1);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
	return 0;
}*/