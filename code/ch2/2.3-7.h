#include <iostream>
#include <vector>
#include "2.3-1.cpp"
#include "2.3-5.cpp"
using namespace std;

void Merge(vector<int> &vec, int p, int q, int r);
void MergeSort(vector<int> &vec, int p, int r);

//void Sert(vector<int> &vec, int n);
//void RecursionInsertionSort(vector<int> &vec, int n);
int BinarySearch(vector<int> &vec, int start, int end, int v);