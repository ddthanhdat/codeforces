#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
using namespace std;
map<long long,long long> a1;

map<long long,long long> a2;

map<long long,long long>::iterator it;
int main(){
	long long n;
	cin >> n;
	for(long long i=0;i<n;i++){
		long long a;
		cin >> a;
		a1[a]++;
	}
	for(long long i=0;i<n-1;i++){
		long long a;
		cin >> a;
		a2[a]++;
		a1[a]--;
		if(a1[a]==0) {
			it=a1.find(a);
			a1.erase(it);
		}
	}
	for(long long i=0;i<n-2;i++){
		long long a;
		cin >> a;
		a2[a]--;
		if(a2[a]==0) {
			it=a2.find(a);
			a2.erase(it);
		}
	}
	it=a1.begin();
	cout << it->first<< endl;
	
	it=a2.begin();
	cout << it->first<< endl;
	
	
	
	
}
