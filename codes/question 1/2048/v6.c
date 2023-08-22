// v6
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int N = 2048;
double Answer[2048][2048];
double input1[2048][2048];
double input2[2048][2048];
int B = 32;

void initialization(){

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			input1[i][j] = (rand() % 10) +1;
		}
	}
	
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			input2[i][j] = (rand() % 10) + 1;
		}
	}
}

void multiplication(){
for(int k=0; k<N; k=k+B)
	{	
		for(int j=0; j<N; j=j+B){
 			
 			for (int i=0; i < N; i=i+B){
 				for(int ii=i; ii<i+B; ii++){
 					for(int jj=j; jj < j+B; jj++){
 						for(int kk=k; kk < k+B; kk++){
 							Answer[ii][jj] += input1[ii][kk] * input2[kk][jj];
 							}
 						}
 					}
 				}
 			}
 							
 	} 
}

int main(){
	
	time_t t; 
    srand((unsigned) time(&t)); 

	initialization();	
	multiplication();
 	
 	return 0;
}



