#include <bits/stdc++.h>
using namespace std;
void explainpair(){
   {
       pair<int,int> p={1,3};
       cout<<p.first<<" "<<p.second<<endl;
   }

   {
       pair<int,pair<int,int>> p={4,{5,6}};
       cout<<p.first<<" "<<p.second.second<<" "<<p.second.second<<endl;
   }
   {
       pair<int,int> arr[]={{1,2},{33,4},{3,5}};
       cout<<arr[2].second;
   }
}
int main(){
    explainpair(); 
}