//MergeSort, Merge
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void Merge(vector<int> &vec, int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    vector<int> vec1(n1), vec2(n2);
    
    for(int t1=0;t1<n1;t1++){
    	vec1[t1] = vec[t1+p];
    }
    for(int t2=0;t2<n2;t2++){
    	vec2[t2] = vec[t2+q+1];
    }

    int i=0, j=0, k;
    
    for(k=p;k<r+1;k++){
        if(vec1[i]<vec2[j]){
        	vec[k]=vec1[i];
        	i++;
        }else{
        	vec[k]=vec2[j];
        	j++;
        }
        if(i==n1 or j==n2){
            k++;
            break;
        }
    }
    
    while(i<n1) vec[k++]=vec1[i++];
    while(i<n2) vec[k++]=vec2[j++];  
}


void MergeSort(vector<int> &vec, int p, int r){
    int q=0;
    if(p<r){
        q = floor((p+r)/2);
        MergeSort(vec, p, q);
        MergeSort(vec, q+1, r);
        Merge(vec, p, q, r);
    }
}
//Test function: MergeSort
/*int main(){
	vector<int> vec={3,41,52,26,38,57,9,49, 12, 1234, 222};
	MergeSort(vec, 0, vec.size()-1);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
}*/