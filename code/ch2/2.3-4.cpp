#include <iostream>
#include <vector>
using namespace std;

void Sert(vector<int> &vec, int n){
	int tmp = vec[n-1];
	int i = n-2;
	while(i>0 and vec[i]>tmp){
        vec[i+1]=vec[i];
        i--;
	}
	vec[i+1]=tmp;
}

void RecursionInsertionSort(vector<int> &vec, int n){
	if(n>1){
		RecursionInsertionSort(vec, n-1);
		Sert(vec, n);
	}
}

/*//Test function RecursionInsertionSearch, Sert
int main(){
	vector<int> vec={3, 41, 52, 26, 38, 57, 9, 49};
	RecursionInsertionSearch(vec, vec.size());
	for(int j=0;j<vec.size();j++){
		cout<<vec[j]<<endl;
	}
	return 0;
}*/