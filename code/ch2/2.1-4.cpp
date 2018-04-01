//Summation
#include <iostream>
#include <vector>
using namespace std;

vector<int> Summation(vector<int> vec1, vector<int> vec2){
    int n1 = vec1.size();
    int n2 = vec2.size();
    int n;
    if(n1>n2){
    	n=n1+1;
    }else{
    	n=n2+1;
    }
    int i=n1-1,j=n2-1;
    vector<int> vec1_(n, 0), vec2_(n, 0), res(n, 0);
    //cout<<n2<<" "<<n<<endl;
    while(i>=0 && vec1[i] >0){
    	vec1_[n-n1+i]=vec1[i];
    	i--;
    }
    while(j>=0 && vec2[j] >0){
    	vec2_[n-n2+j]=vec2[j];
    	j--;
    }

    /*for(int i1=0;i1<n;i1++){
        cout<<vec1_[i1]<<endl;
    }*/
    /*for(int i2=0;i2<n;i2++){
        cout<<vec2_[i2]<<endl;
    }*/

    int k=n-1, tmp=0;
    while(k>=0){
    	res[k]=(vec1_[k]+vec2_[k]+tmp)%10;
    	tmp = (int)((vec1_[k]+vec2_[k]+tmp)/10);
    	k--;
    }
    return res;
}
/*// Test function: Summation
int main(){
	vector<int> vec1={9, 9, 9};
	vector<int> vec2={1};
	vector<int> result=Summation(vec1, vec2);
	for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}*/