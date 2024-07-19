
#include<iostream>
using namespace std;
	int number_less_than_index=0;
	for(int i=start+1;i<end+1;i++){
		if(arr[i] < arr[start]){
			number_less_than_index++;
		}
	}
	int correct_index = start + number_less_than_index;
	swap(arr[start],arr[correct_index]);	
	int i,j;
	i=start;
	j=end;
	while(i<correct_index && j>correct_index){
		while(arr[i] < arr[correct_index]){
			i++;
		}
		
		while(arr[j] > arr[correct_index]){
			j--;
		}
		
		if(i<correct_index && j>correct_index){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
	
	return correct_index;
}

void quickSort(int* arr, int start, int end){
	if(start >= end){
		return;
	}
	
	int partition_index;
	partition_index = partition(arr,start,end);

	quickSort(arr,start,partition_index-1);
	quickSort(arr,partition_index+1,end);
}

int main(){
	int arr[7] = {5,1,3,10,7,14,2};
	int size;
	size = 7;
	
	quickSort(arr,0,size-1);
	
	int k;
	for(k=0;k<size;k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}
