#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){

	T hold;

	for(int i=0; i<N-1; i++){

		for(int j=i; j>=0; j--){

				if(d[j+1]>d[j]){
			hold = d[j+1];
			d[j+1] = d[j];
			d[j] = hold; }

		}
		cout << "Pass " << i+1 << ":";
	for(int i = 0; i < 10; i++) 	cout << d[i] << " ";
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
