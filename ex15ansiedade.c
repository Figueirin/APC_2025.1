#include <stdio.h>
#include <string.h>

int main(){

    char resposta[10];
    int triagens = 0;
    
    while(1){  
        int sim = 0;
        for(int i = 0; i < 10; i++){
            if(scanf("%s", resposta) == EOF){
                printf("%d\n", triagens);
                return 0;
            }

            if(strcmp(resposta, "sim") == 0){
                sim++;
            }
            
        }
        if(sim >= 2){
            triagens++;
        }
    }
}