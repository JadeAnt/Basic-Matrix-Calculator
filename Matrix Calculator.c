#include <stdio.h>
#include <stdlib.h>

// Matrix Addition- Practice Project 1 
#define NR_ROWS		3
#define NR_COLUMNS	3

void addition(int A[][NR_COLUMNS], int B[][NR_COLUMNS]){
	int i, j, sum;
	
	for(i = 0; i < NR_ROWS; i++){
	    for(j = 0; j < NR_COLUMNS; j++){
    		sum = A[i][j] + B[i][j];
			printf("%d ", sum);
		}
	    printf("\n");
   }//OUTPUT SUM OF MATRICIES
	
}

void subtraction(int A[][NR_COLUMNS],int B[][NR_COLUMNS]){
	int i, j, difference;

	for(i = 0; i < NR_ROWS; i++){
		for(j = 0; j < NR_COLUMNS; j++){
			difference = A[i][j] - B[i][j];
			printf("%d ", difference);	
		}
		printf("\n");
	}//OUTPUT DIFFERENCE OF MATRICIES
		    
}

void multiplication(int A[][NR_COLUMNS], int B[][NR_COLUMNS]){
	int i, j; 
	
	
}

void swap(int A[][NR_COLUMNS], int B[][NR_COLUMNS]){
	int i, j, temp;
	
	for( i = 0; i < NR_ROWS; i++){
		for(j = 0; j < NR_COLUMNS; j ++){
			temp = A[i][j];
			A[i][j] = B[i][j];
			B[i][j] = temp; 
		}
		printf("\n");
	} 

	printf("Matrix A: \n");
	for( i = 0; i < NR_ROWS; i++){
		for(j = 0; j < NR_COLUMNS; j ++){
			printf("%d", A[i][j]);
		}
		printf("\n");
	} 
	
	printf("\n");
	
	printf("Matrix B: \n");
	for( i = 0; i < NR_ROWS; i++){
		for(j = 0; j < NR_COLUMNS; j ++){
			printf("%d", B[i][j]);
		}
		printf("\n");
	} 
	
}

int main(int argc, char *argv[]){
    int  i, j, A[NR_ROWS][NR_COLUMNS], B[NR_ROWS][NR_COLUMNS];
	int sum, difference, multi;
	char oper;
                                                                          
/*Operation functionality
	-Need to include multiplication*/
	
	printf("Operation (+/-/*/s[swap]):");
	scanf("%c", &oper);
	
	if(oper != '+' && oper != '-' && oper != 's'){
		printf("Operation is not valid.\n");
		return 0;
	}				
	
/**Matrix Input Functionality**/

    printf("Input values into the 1st matrix: \n");
   
//Setup for Matrix A  
    for(i = 0; i < NR_ROWS; i++){
        for(j = 0; j < NR_COLUMNS; j++){
            scanf("%d", &A[i][j]);

        }
    }//INPUT FOR MATRIX A
    
    printf("\n");
    
    for(i = 0; i < NR_ROWS; i++){
        for(j = 0; j < NR_COLUMNS; j++){
            printf("%d ", A[i][j]);
			
        }
	    printf("\n"); 
    }//OUTPUT MATRIX A
    
//Setup for Matrix B
   
   printf("\n Input values into the 2st matrix: \n");
   
    for(i = 0; i < NR_ROWS; i++){
        for(j = 0; j < NR_COLUMNS; j++){
            scanf("%d", &B[i][j]);

        }
    }//INPUT MATRIX B
    
    printf("\n");
    
    for(i = 0; i < NR_ROWS; i++){
        for(j = 0; j < NR_COLUMNS; j++){
            printf("%d ", B[i][j]);
			
        }
	    printf("\n");  
    }//OUTPUT MATRIX B
    
     printf("\n");
    
/** Calculator Functionality **/

	//Addition, Subtaction, need to include multiplication    
    switch(oper){
	
		case '+': // Sum between matricies
			
			printf("Sum : \n");
			/*
		    for(i = 0; i < NR_ROWS; i++){
		        for(j = 0; j < NR_COLUMNS; j++){
		            sum = A[i][j] + B[i][j];
					printf("%d ", sum);
		        }
			    printf("\n");
		    }//OUTPUT SUM OF MATRICIES
		    */
		    addition(A, B);
		    break;
		    
		case '-': // Difference between matricies 
		    
		    printf("Difference : \n");
		    /*
		    for(i = 0; i < NR_ROWS; i++){
		        for(j = 0; j < NR_COLUMNS; j++){
		            difference = A[i][j] - B[i][j];
					printf("%d ", difference);	
		        }
			    printf("\n");
		    }//OUTPUT DIFFERENCE OF MATRICIES
		    */
		    subtraction(A,B);
		    break; 
		    
		 //Multiplication case- need working algorithim
		    
		case '*':
			
			printf("Multiplication: \n");
			/*
			for(i = 0; i < NR_ROWS; i++){
		        for(j = 0; j < NR_COLUMNS; j++){
		            multi = A[i][j] * B[i][i];
					printf("%d ", multi);	
		        }
			    printf("\n");
		    }//OUTPUT MULTIPLICATION OF MATRICIES
		    */
		    multiplication(A,B);
		    break;
		
		case 's':
			printf("Swapped: \n");
			
			swap(A,B);
			break;
    	
	}//SWITCH OPERATOR
    
    return 0;
}