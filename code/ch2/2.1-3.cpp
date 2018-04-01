//LineSearch
#include <iostream>
#include <vector>
using namespace std;

int LineSearch(vector<int> &vec, int v){
    int res;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==v){
            res = i;
            break;
        }
    }
    return res;
}

/*//Test function: LineSearch
int main(){
    int v;
    vector<int> vec = {31, 41, 59, 26, 41, 58};
    cout<<"Please enter a number: "<<endl;
    cin>>v;
    cout<<LineSearch(vec, v)<<endl;
    return 0;
}*/