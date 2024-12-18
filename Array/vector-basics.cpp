#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    // cout<<"size of vector before pop = "<< vec.size()<<endl;

    // vec.pop_back();

    // for(int val:vec){
    //     cout<<val<<endl;
    // }
    // cout<<"at position 1 = "<<vec.at(1)<<endl;

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
}
