#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Argomenti errati");
        exit(1);
    }
    int pid = fork();
    if (pid==0){
        int lunghezzaStringa=strlen(argv[1]);
        for(int i=0; i< lunghezzaStringa;i++){
            argv[1][i] = toupper(argv[1][i]);           
        }
        printf("%s", argv[1]);
        exit(2);
    }
    else{
        wait(&pid)
    }
    return 0;
}