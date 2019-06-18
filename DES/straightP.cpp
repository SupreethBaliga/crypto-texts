#include <bits/stdc++.h>
using namespace std;
//finding inverse of the sstraight-p permutation
string permuteString(string key,int* parity_table, int n){
    string result = "";
    for(int i=0;i<n;i++){
        result += key[parity_table[i]-1];
    }
    return result;
}

int main() {
	int inverseP[] = {
		9,17,23,31,13,28,2,18,24,16,30,6,26,20,10,1,
		8,14,25,3,4,29,11,19,32,12,22,7,5,27,15,21
	};
	char init[33];
	scanf("%s",init);
	string final = permuteString(init,inverseP,32);
	cout<<final;
}