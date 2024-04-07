#include <stdio.h>

float returnAverage(int array[], int n) {
    int sum = 0;
    float avg;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    avg = (float)sum / n;
    return avg;
}
int nOverTheAvg(int array[], int n , float avg){
    
    int counter = 0;
    for(int j = 0 ; j<n; j++){
        if(array[j] > avg){
            counter ++;
        }
    }
    
    return counter;
    
}


int main() {
    // Write C code here
    
    int n;
    scanf("%d",&n);
    int array[n];
    
    for(int i =0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    float result = returnAverage(array,n);
    
    int final = nOverTheAvg(array,n,result);
    
    printf("Numbers of the avg %d",final);
    
    
    
    

    return 0;
}
