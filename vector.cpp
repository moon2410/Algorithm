#include<bits/stdc++.h>
using namespace std;

int main(){


vector<int> v;
srand(time(0));

for(int i=0;i<10;i++){
    v.push_back(rand()%1000+1);
}


for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

return 0;
}
