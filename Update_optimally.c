#include <stdio.h>

void clock_wise_rotate(int arr[],int s,int e,int k){
    while(k){
        int j, temp;  
        for(int i=s;i<e;i++){
           //Stores the last element of the array    
            temp = arr[e-1];   
            for(j = e-1; j > 0; j--)
            {
                   //Shift element of array by one    
                    arr[j] = arr[j-1];
             }
            //Last element of the array will be added to the start of the array.    
            arr[0] = temp;
        }
        k--;
    }
}

void anti_clock_wise_rotate(int arr[],int s,int e,int k){
    while(k){
        int j, temp; 
        for(int i=s;i<e;i++){
           //Stores the last element of the array    
            temp = arr[0];
            for(j = s; j < e; j++)
            {
                   //Shift element of array by one    
                    arr[j] = arr[j+1];
            }
            //Last element of the array will be added to the start of the array.    
            arr[0] = temp;
        }
        k--;
    }
}

int main() {
	//code
	return 0;
}