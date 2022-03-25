
#include <stdio.h>
int main(void){
    // Your code here!
    
// : 3の倍数を「fizz」と表示
// : 5の倍数を「buzz」と表示
// : 3と5の公倍数を「fizzbuzz」と表示
    
    int end;
    int i;
    end=30;
    for(i=1;i<=end;i++){
        if(i%3 == 0 && i%5==0 ){
            printf("FizzBuzz\n");
        }
        else if (i%3 ==0){
            printf("Fizz \n");
        }
        else if (i%5 ==0){
            printf("Buzz \n");
        }
        else{
            printf("%d \n", i);
        }
    }
}


