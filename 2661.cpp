#include <set>
#include <stdio.h>
#include <cmath>
using namespace std;

set<int> primeFactors(unsigned long long int n){
	set<int> factors;
	while (n%2 == 0){
		factors.insert(2);
		n = n/2;
	}
	for (int i = 2; i <= sqrt(n); i++){
		while (n%i == 0){
			factors.insert(i);
			n = n/i;
		}
	}
	if (n > 2)
		factors.insert(n);
	return factors;
}


unsigned long long int fact(unsigned long long int n){
	if ((n==1) || (n==0)){
		return 1;               
	}
   	else{
		return fact(n-1)*n;
	}
}

int main(){
	unsigned long long int n;
	unsigned long long int desp = 0;
	scanf("%lld", &n);
	
	set<int> prime_factors = primeFactors(n);
	
	if(prime_factors.size() < 2){
		printf("%d\n", 0);
	}
	else{
		unsigned long long int n = prime_factors.size();
		for(unsigned long long int i = 2; i <= n; i++){
			desp += fact(n)/(fact(i)*fact(n-i));
		}
		printf("%llu\n", desp);
	}
}















