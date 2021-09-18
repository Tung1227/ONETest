#include<iostream>
#include<vector>
#include <sstream>
#include <algorithm>
using namespace std;


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