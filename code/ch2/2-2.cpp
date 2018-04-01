#include <iostream>
#include <vector> 
using namespace std;

void BubbleSort(vector<int> &vec){
	int tmp;
	for(int i=0;i<vec.size()-2;i++){
        for(int j=vec.size()-1;j>i;j--){
        	if(vec[j]<vec[j-1]){
                tmp = vec[j];
                vec[j] = vec[j-1];
                vec[j-1] = tmp;
        	}
        }
	}
}

// Test function: BubbleSort
/*int main(){
	vector<int> vec={31, 41, 59, 26, 47, 58, 21, 43, 55, 78};
	BubbleSort(vec);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
	return 0;
}*/