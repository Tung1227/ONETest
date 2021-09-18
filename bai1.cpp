#include<iostream>
#include<vector>
#include <sstream>
#include <algorithm>
using namespace std;

void quickSort(int a[], int l,int r){
    int p = a[(l+r)/2];
    int i = l, j = r;
    while(i<j){
        while(a[i] < p){
            i++;
        }
        while(a[j] > p){
            j--;
        }
        if(i<=j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
        if(i < r) quickSort(a,i,r);
        if(l < j) quickSort(a,l,j);
    }
}
void solve(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            a[i]*=-1;
        }
    }
    quickSort(a,0,n-1);
    for(int i = 0; i < n; i++){
        a[i] = a[i]*a[i];
        cout << a[i] << " ";
    }
}
int main(){
    std::vector<int> vec;
    std::string buffer;
    int data;
    std::getline(std::cin, buffer);
    std::istringstream iss(buffer);
    while (iss >> data)
          vec.push_back(data);  
    for (int i = 0; i < vec.size(); i++){
        if(vec[i] < 0){
            vec[i]= vec[i]*(-1);
        }
    }
    sort(vec.begin(),vec.end());
    for(int i: vec){
        cout << i*i << " ";
    }
    return 0;
}