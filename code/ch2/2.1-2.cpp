//InsertSortD
#include <iostream>
#include <vector>
using namespace std;

/*int main() {
    int i;
    vector<int> array;
    cout<<"请输入一个数组："<<endl;
    while (cin >> i) {
        array.push_back(i);
    }
    for(int j=0;j<array.size();j++){
        int tmp = array[j];
        int k = j-1;
        while( k >= 0 and array[k] < tmp){
            array[k+1]=array[k];
            k = k - 1;
        }
        array[k+1] = tmp;
    }
    for (int index = 0;index< array.size();index++){
        cout << array[index] <<endl;
    }
    return 0;
}*/

void InsertionSortD(vector<int> &vec){
    int j, tmp;
    for(int i=0;i<vec.size();i++){
        j=i-1; tmp=vec[i];
        while(j>=0 && vec[j]<tmp){
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=tmp;
    } 
}
/*//Test function: InsertionSortD
int main(){
    vector<int> vec = {31, 41, 59, 26, 41, 58};
    InsertionSortD(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}*/