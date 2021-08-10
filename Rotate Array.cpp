#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reversearray(vector<int> &arr,int start,int end)
{
    while(start<end){
        swap(arr[start],arr[end]);
        start++, end--;
    }
}

vector<int> solution(vector<int> &A, int K) {
    int n = A.size();
    reversearray(A,0,n-1);
    reversearray(A,0,K-1);
    reversearray(A,K,n-1);
    return A;
}
