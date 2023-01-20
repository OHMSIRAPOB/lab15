#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for(int i=1;i<N;i++){
		cout << "Pass " << i << ":"; 
		
		int j= i-1; 
    	T key = d[i]; 
    	while(d[j]<key && j>=0) 
    	{ 
           d[j+1]=d[j]; 
           j--; 
    	}
       d[j+1]=key; 

		for(int j=0;j < N;j++){  
			cout << d[j] ;
			if(j!=N-1) cout << " ";
		}
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
