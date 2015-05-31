#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
using namespace std;

vector<string> v;
int main(){
	string a,b;
	long long n;
	cin >> n;
	for(long long i=0;i<n;i++){
		cin >> a;
		if(a=="pwd") {
			for(long long j=0;j<v.size();j++){
				cout << "/"<< v[j];
			}
			cout << "/" << endl;
		}
		else{
			cin >> b;
			b+='/';
			string tmp;
			if(b[0]=='/') v.clear();
			for(long long j=0;j<b.size();j++){
				
				if(b[j]!='/'){
					tmp+=b[j];
				}
				else{
				//	cout << tmp << endl;
					if(tmp=="..") v.pop_back();
					else{
						if(!tmp.empty()) 
						v.push_back(tmp);
						
					}
					tmp.clear();
				}
			}
		}
	}
}
