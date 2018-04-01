//InversionSearch
#include <iostream>
#include <vector>
using namespace std;

int MergeSearch(vector<int> &vec, int p, int mid, int r){
	int count = 0;
	int n1=mid-p+1;
	int n2=r-mid;
	vector<int> vec1(n1, 0), vec2(n2, 0);
	
	for(int i=0;i<n1;i++){
		vec1[i]=vec[i+p];
	}
	
	for(int j=0;j<n2;j++){
        vec2[j]=vec[j+mid+1];
	}

/*	for(int k=0;k<n1;k++){
		for(int l=0;l<n2;l++){
			if(vec1[k]>vec2[l]){
				count++;
			}
		}
	}*/
	int i1=0, i2=0, k; 
	for(k=p;k<r+1;k++){
		if(vec1[i1]>vec2[i2]){
			vec[k]=vec2[i2];
			count+=(n1-i1);
			i2++;
		}else{
			vec[k]=vec1[i1];
			i1++;
		}
		if(i1==n1 or i2==n2){
			k++;
			break;
		}
	}
	while(i1<n1) vec[k++]=vec1[i1++];

	while(i2<n2) vec[k++]=vec2[i2++]; 
	return count;
}

int InversionSearch(vector<int> &vec, int p, int r){
	int counter = 0;
	if(p<r){
		int mid = (int)((p+r)/2);
		counter+=InversionSearch(vec, p, mid);
		counter+=InversionSearch(vec, mid+1, r);
		counter+=MergeSearch(vec, p, mid, r);
	}
	return counter;
}
//Test function: InversionSearch
/*int main(){
	int v=0;
	vector<int> vec={31, 41, 59, 26, 47, 58, 1};
	v=InversionSearch(vec, 0, vec.size()-1);
    cout<<v<<endl;
    for(int i=0;i<vec.size();i++){
    	cout<<vec[i]<<endl;
    }
    return 0;
}*/