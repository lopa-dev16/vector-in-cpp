#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	//create vector,declare
	vector<int>v;
	vector<int>v1;
	//size and capacity
	cout<<"size of v: "<<v.size()<<endl;
	cout<<"capacity of v: "<<v.capacity()<<endl;
	cout<<"see the difference"<<endl;
	v.push_back(2);
	v.push_back(1);
	v.push_back(10);
	v.push_back(11);
	v.push_back(19);
	v.push_back(16);
	cout<<"size of v: "<<v.size()<<endl;
	cout<<"capacity of v: "<<v.capacity()<<endl;
	//update value....
	v[1]=5;
	v1.push_back(6);
	v1.push_back(16);
	v1.push_back(56);
	v1.push_back(6);
	v1.push_back(86);
	v1.push_back(76);

//delete value from vector
v1.pop_back();

	cout<<"size of v1: "<<v1.size()<<endl;
	cout<<"capacity of v1: "<<v1.capacity()<<endl;
//print full
for(int i=0;i<v.size();i++)
cout<<v[i]<<" "<<endl;
//insert value
v.insert(v.begin()+1,50);
for(int i=0;i<v1.size();i++)
cout<<v1[i]<<" "<<endl;
cout<<"so here its end..........."<<endl;

//sort array
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
cout<<"increasing  order : "<<v[i]<<" ";
cout<<endl;
//sort in decreasing order....................
 sort(v.begin(),v.end(),greater<int>());
for(int i=0;i<v.size();i++)
cout<<"decreasing order: "<<v[i]<<" ";

//search an element in one line
//search in binary search
cout<<"found the specific element: "<<binary_search(v.begin(),v.end(),10)<<endl;

}
