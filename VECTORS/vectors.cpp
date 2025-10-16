#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Size of vector is:"<<v.size()<<endl;
    cout<<"Capacity of Vector is"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size of vector is:"<<v.size()<<endl;
    cout<<"Capacity of Vector is"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size of vector is:"<<v.size()<<endl;
    cout<<"Capacity of Vector is"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size of vector is:"<<v.size()<<endl;
    cout<<"Capacity of Vector is"<<v.capacity()<<endl;


    v.push_back(4);
    cout<<"Size of vector is:"<<v.size()<<endl;
    cout<<"Capacity of Vector is"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Size of vector is:"<<v.size()<<endl;
    cout<<"Capacity of Vector is"<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Size of vector is:"<<v.size()<<endl;
    cout<<"Capacity of Vector is"<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
    {
        // cout<<v[i]<<" ";
         cout<<v.at(i)<<endl; //cascade sign
    }
    for(auto value:v)
    {
        cout<<value<<" ";
    cout<<endl;

    }
    v.pop_back();
    for(auto value:v){
        cout<<value<<" ";
    cout<<endl;
    cout<<"Front:"<<v.front()<<" "<<"Last value:"<<v.back()<<endl;
    }

    v.insert(v.begin()+4,3,11);
        for(auto value:v){
        cout<<value<<" ";
    cout<<endl;}

    cout<<"Size of vector is:"<<v.size()<<endl;
    cout<<"Capacity of vector is:"<<v.capacity()<<endl;

    v.erase(v.begin());
        for(auto value:v){
            cout<<value<<" ";
        cout<<endl;}
    v.erase(v.begin(),v.begin()+3);
            for(auto value:v){
            cout<<value<<" ";
        cout<<endl;}

    }

    // ITERATORS

    vector<int>::reverse_iterator rit;
