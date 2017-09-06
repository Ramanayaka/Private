#include <stdio.h>
#include <stdlib.h>

int linerSearch(int value, int* array,int length);

int main(){

	int array[10] = {1,3,5,6,7,8,9,0,4,2};

	if (linerSearch(0,array,10)){
		printf("%s\n","true");
	}else{
		printf("%s\n","false");
	}

	return 0;
}


int linerSearch(int value, int* array, int length){
	int i=0;
	for(i=0;i<length;i++){
		if (array[i] == value){
			return 1;
		}
	}

	return 0;
}