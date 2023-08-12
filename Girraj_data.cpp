//We created a class of an Employee with 4 attributes
// Then three variables are defined e1,e2,e3
//Then a priority queue is defined of a pair<string,int>
//So, the top element will contain the element with largest salary
//Girraj Gautam

#include<bits/stdc++.h>
using namespace std;
class Emp{
    public:
    int id;
    string name;
    int sal;
    int age;
    Emp(int i,string n, int s,int a){
        id=i;
        name=n;
        sal=s;
        age=a;
    }
};
int main(){

    Emp e1(1,"jai",10,23);
    Emp e2(2,"bob",30,23);
    Emp e3(3,"alice",50,23);
    
    priority_queue<pair<int,string>> pq;
    pq.push({e1.sal,e1.name});
    pq.push({e2.sal,e2.name});
    pq.push({e3.sal,e3.name});
    pair<int,string> p=pq.top();
    cout<<p.first<<" "<<p.second;
    return 0;
}
