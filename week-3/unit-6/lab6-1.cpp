#include <iostream>

int main(){
    int i=0;
    while(i<5){
        std::cout<<i<<" ";
        i++;
    }

    //while loop: sum of 1-10 is...
    int sum=0, j=1;
    while(j<=10){
        sum+=j;
        j++;
    }

    //nested loop expample
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            std::cout<<i<<" "<<j<<std::endl;
        }
    } 
}

