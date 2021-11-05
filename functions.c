#include "functions.h"


int* readData(FILE* in, int* size){
    
    fscanf(in, "%d", size);
    
    int* arr = (int*)malloc(*size * sizeof(int));
    
    for(int i = 0; i < *size; i++){
        fscanf(in, "%d", &arr[i]);
        
    }
    
    fclose(in);
    return arr;
    
}


void determineGrade(int* arr, int size){
    
    int diff = 0;
    int sub = 0;
    int nums = 0;
    double perc = 0;
    
    for(int i = 0; i < size; i++){
        if(arr[i] % 5 != 0){
            
            if(arr[i] < 38){
                
            }else{
                    diff = (arr[i]/5) + 1;
                    sub = (diff * 5) - arr[i];
            
                if(sub < 3){
                    arr[i] = diff * 5;
                    nums++;
                
                    }
                }
                
            }
            
        }
    
    perc = (double) nums / size;
    
    printf("%d = %.2lf%% of the students benefited from the grading policy change.", nums, perc);
    
}


void printGrade(int size, int* arr){
    
    printf("\nThe new grades are:\n");
    
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    
    
}


void checkArguments(int argc){
    
    if(argc != 2){
        printf("To few command line arguments. Exiting program.");
        exit(1);
    }
    
}


void checkFile(FILE* fp){
    
    if(fp == NULL){
        printf("The file did not open successfully. Exiting program.\n");
        exit(2);
    }
    
}


void calculatePercent(int size, int* arr){
    
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int f = 0;
    
    for(int i = 0; i < size; i++){
        
        if(arr[i] < 101 && arr[i] >= 85){
            a++;
        }else if(arr[i] < 85 && arr[i] >= 70){
            b++;
        }else if(arr[i] < 70 && arr[i] >= 55){
            c++;
        }else if(arr[i] < 55 && arr[i] >= 40){
            d++;
        }else if(arr[i] < 40 && arr[i] >= 0){
            f++;
        }
        
    }
    
    printf("\nThe following is a graph that represents the grade distribution for each grade category.\n");
    printf("A: ");
    
    printGraph(a);
    
    printf("\nB: ");
    printGraph(b);
    
    printf("\nC: ");
    printGraph(c);
    
    printf("\nD: ");
    printGraph(d);
    
    printf("\nF: ");
    printGraph(f);
    
    
}


void printGraph(int p){
    
    for(int i = 1; i <= p; i++){
        printf("* ");
    }
}

