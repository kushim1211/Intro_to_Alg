#include <iostream>
#include <vector>
using namespace std;

int Horner(vector<int> &vec, int x){
	int res = 0;
	for(int i=vec.size()-1;i>=0;i--){
		res = vec[i] + x * res;
	}
	return res;
} 

//Test function: Horner
/*int main(){
    int x;
    vector<int> vec={2, 1, 2, 3};
    cout<<"Please enter a value: "<<endl;
    cin>>x;
    cout<<Horner(vec, x)<<endl;
    return 0;
}*/