#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
int n, m, element,row,column;
   cin>>n>>m;
vector<vector<int>> v;
vector<vector<int>> w;
vector<vector<int>> r;
for(int row=0;row< n;row++){
    v.push_back(vector<int>{});
    for(int column=0;column<m;column++){
        cin>>element;
        v.at(row).push_back(element);
    }
}
for(int a=0;a<n;a++){
    for(int b =0;b<m;b++){
        cout << v.at(a).at(b)<<" ";
    }cout <<endl;
}
for(int row=0;row< n;row++){
    w.push_back({});
    for(int column=0;column<m;column++){
        cin>>element;
        w.at(row).push_back(element);
    }
}
for(int c=0;c<n;c++){
    for(int d =0;d<m;d++){
        cout << w.at(c).at(d)<<" ";
    }cout <<endl;
}


    return 0;
}