#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
cout<<"Size of Vector 1 : "<<v.size()<<endl;
cout<<"Capacity of Vector 1 :"<<v.capacity()<<endl;
v.push_back(1);
cout<<"Size of Vector 1 : "<<v.size()<<endl;
cout<<"Capacity of Vector 1 :"<<v.capacity()<<endl;
v.push_back(3);
cout<<"Size of Vector 1 : "<<v.size()<<endl;
cout<<"Capacity of Vector 1 :"<<v.capacity()<<endl;
v.push_back(5);
cout<<"Size of Vector 1 : "<<v.size()<<endl;
cout<<"Capacity of Vector 1:"<<v.capacity()<<endl;
v.push_back(6);
cout<<"Size of Vector 1 : "<<v.size()<<endl;
cout<<"Capacity of Vector 1 :"<<v.capacity()<<endl;
v.push_back(8);
cout<<"Size of Vector 1 : "<<v.size()<<endl;
cout<<"Capacity of Vector 1 :"<<v.capacity()<<endl; 
for(int i=0;i<v.size();i++){
    // cout<<v[i]<<" ";
    cout<<v.at(i)<<" ";
}
cout<<endl;
v.pop_back();
for(auto value:v)
cout<<value<<" ";
cout<<endl;
cout<<"Front "<<v.front()<<endl<<"Back "<<v.back()<<endl;

v.insert(v.begin(),2);
for(auto value:v)
cout<<value<<" ";
cout<<endl; 
v.insert(v.begin()+2,3);
for(auto value:v)
cout<<value<<" ";
cout<<endl;
v.insert(v.begin()+2,3,7);
for(auto value:v)
cout<<value<<" ";
cout<<endl;
cout<<"Size of Vector 1 : "<<v.size()<<endl;
cout<<"Capacity of Vector 1 :"<<v.capacity()<<endl;
v.erase(v.begin(),v.begin()+3);
for(auto value:v)
cout<<value<<" ";
cout<<endl;
vector<int>v1={3,5};
for(auto value:v1)
cout<<value<<" ";
cout<<endl;
vector<int>v2={3,1,3,5,9};
for(auto value:v2)
cout<<value<<" "<<endl;
vector<int>::iterator itr;
for(auto itr=v.begin();itr!=v.end();itr++)
cout<<*itr<<" ";
cout<<endl;
for(auto rit=v.end()-1;rit>=v.begin();rit--)
cout<<*rit<<" ";
cout<<endl;
return 0;
}