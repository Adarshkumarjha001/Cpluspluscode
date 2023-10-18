#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
using namespace std;

//STL - Standard Template Library
//Types of STL Containers
/*
    1. Sequential - It allows us to store elements that can be accessed in sequential order eg - Array, List,Vector.
    
    2. Associative - It allows us to store elements in sorted order, the order doesn't depend upon when the element is inserted. eg - Set, Map, multisett, multimap

    3. Unordered Associative - It provides the usorted version of associative containers.eg - unordered_set, unordered_map, unordered_multiset, unordered_multimap
*/

int main(){
    // vector<int> num = {1,2,3,4,5,5};
    // set<int> num = {1,9,10,7,10};
    unordered_set<int> num = {2,5,6,55,3,5};
    for(auto nums : num){
        cout << nums << " ";
    }cout << endl;
}
