//SelecctionSort
#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &vec){
    int index, tmp;
    for(int i=0;i<vec.size();i++){
        index = i;
        for(int j=i+1;j<vec.size();j++){
            if(vec[index]>vec[j]){
                index = j;
            }
        }
        tmp=vec[index];
        vec[index]=vec[i];
        vec[i]=tmp;
    }
}
//Test function: SelectionSort
/*int main(){
    vector<int> vec={31, 41, 59, 26, 47, 58, 21, 43, 55, 78};
    SelectionSort(vec);
    for(int j=0;j<vec.size();j++){
        cout<<vec[j]<<endl;
    }
    return 0;
}*/