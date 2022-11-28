#include <stdio.h>

int bitWise_AND(int arr[],int s,int n){
    int flag=0;
    for(int i=s;i<n;i++){
        for(int j=s;j<n;j++){
            if((arr[i] & arr[j] != 0) &&(i!=j)){
                flag=1;
            }
        }
    }
    if(flag==1){
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
	//code
	int count=0;
// 	int N;
// 	scanf("%d",&N);
// 	for(int i=0;i<N;i++){
// 	    scanf("%d",&arr[i]);
// 	}
	for(int i=0;i<N;i++){
	    for(int j=i+1;j<N;j++){
	        if(bitWise_AND(arr,i,j)){
	            count++;
	        }
	    }
	}
	return 0;
}