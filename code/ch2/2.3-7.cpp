//FindSum
#include <iostream>
#include <vector>
#include "2.3-7.h"
using namespace std;

vector<int> FindSum(vector<int> &vec, int v){
	vector<int> result={-1,-1};
	vector<int> vec1 = vec;
	MergeSort(vec, 0, vec.size()-1);
	//RecursionInsertionSort(vec, vec.size());
	/*for(int k=0;k<vec.size();k++){
		cout<<vec[k]<<endl;
	}*/
	int i,j;
	for(i=0;i<vec.size();i++){
		j=BinarySearch(vec, 0, vec.size()-1, v-vec[i]);
	    if(j>0 && j!=i){
	    	for(int i1=0;i1<vec1.size();i1++){
	    		if(vec[i]==vec1[i1]){
	    			result[0]=i1;
	    			break;
	    		}
	    	}
	    	for(int i2=0;i2<vec.size()-1;i2++){
	    		if(vec[j]==vec1[i2]){
	    			result[1]=i2;
	    			break;
	    		}
	    	}
            break;
	    }
	}
	return result;
}
/*//Test function: FindSum
int main(){
	int v;
	vector<int> index={0, 0};
	vector<int> vec={3, 41, 52, 26, 38, 57, 9, 49};
	cout<<"Please enter an number: "<<endl;
	cin>>v;
	index=FindSum(vec, v);
	cout<<index[0]<<' '<<index[1]<<endl;
	return 0;
}*/