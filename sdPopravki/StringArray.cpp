#include<iostream>
#include<string>
using namespace std;



void insertion_sort (string ** arr, int length){
	 	int j;
		string  temp;
		
	for (int i = 0; i < length; i++){
		j = i;
		
		while (j > 0 && *arr[j] <* arr[j-1]){
			  temp = *arr[j];
			*  arr[j] = *arr[j-1];
			 * arr[j-1] = temp;
			  j--;
			  }
		}
}

int main(){
	char input [1024];
	cin.getline(input,1024);
	
	char * start = input;
	string ** test ;
	int size = 5;
	test = new string* [size];
	int i=0;
	while(*start){
		while(!isalpha(*start)){
			start ++;
		}
		string tmp;
		while (isalpha(*start)){
			char symbol = *start;
			tmp.push_back(symbol);
			start ++;
		}
		test[i] = new string(tmp);
		i++;
		if(*start){
			start ++;
		}
		


	}
	insertion_sort(test,5);
	for(int i=0;i<size;i++){
		string t = *(test[i]);
		cout<<t<<endl;
	}
	

}