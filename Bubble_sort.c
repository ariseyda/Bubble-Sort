#include<stdio.h>

#define MAX 50

//Bubble Sort
//The largest number is thrown at the end of the series.
//The number of steps decreases by 1 each time.
//Sorts from small to large
// i-->i+1  
// i>i+1
// swapp(i,i+1)
//Example=99 13 8 25 7

int main(){
	
	int i,k,m,j;
	int array[MAX];
	int size;
	
	printf("Please enter size of array:");
	scanf("%d",&size);
	
	printf("Please enter integers of array:");
	for(k=0;k<size;k++){
		scanf("%d",&array[k]);
	  }
	  
	//When i is 1, the largest element of the array will be placed at the end, 
	//and that element will not be included in the sort, so we make i <(size-j).
	
	for(j=0;j<size;j++){ //j<size
	  //compare indices with i and j
	  //the index i is always to the right of the index j so we use "i<(size-j)"
	  //When j = 1, the 1st iteration is finished. That is, the largest number is placed later and the 2nd iteration is passed.
	  for(i=1;i<(size-j);i++){ // i<(size-j)
	      
		  if(array[i-1]>array[i]){
			
			int temp=array[i-1];
			array[i-1]=array[i];
			array[i]=temp;
	     }
	   }
		
	}

	printf("\nBubble sort:");
	
    for(m=0;m<size;m++){
    	printf("%d ",array[m]);
    }
 
	return 0;
}





