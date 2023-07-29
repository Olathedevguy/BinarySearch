#include<iostream>
#include<vector>
#include<algorithm>

bool binarysearch(std::vector<int>&score, int target){
	int left=0;
	int right= score.size()-1;
	while(left<=right){
	int mid= left+ (right-left)/2; 
	if(score[mid]==target){
		return true;
	}else if(score[mid]<target){
	left=mid+1;
	}else{
	right=mid-1;
	}
	}
	return false;
}
using namespace std;
int main(){
	int target;
	int numscores;
	cout<<"Enter the number of scores:";
	cin>>numscores;
	
vector<int>score(numscores);

cout<<"Enter the scores:\n";
for(int i=0; i<numscores; i++){
	cin>>score[i];
}

sort(score.begin(), score.end());
cout<<"Enter the score you want to find"<<endl;
cin>>target;

bool found= binarysearch(score,target);

if(found){
	cout<<"score"<<target<<"is found"<<endl;
}else{
	cout<<"score"<<target<<"is not found"<<endl;
}
return 0;
}