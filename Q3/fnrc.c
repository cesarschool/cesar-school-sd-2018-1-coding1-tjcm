#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", s, length);
    
    int diferente; 
    
   for(int i = 0; i < length ; i++){ 
       diferente = 0; 
       for(int j = 0; j < length ; j++){
           if (i != j && sentence[i] == sentence[j]){
             diferente = 1; 
             } 
        } 
       if (diferente==0) 
           printf("%c", sentence[i]); 
           printf("\nfirstNonRepeatingChar::END\n");
           return sentence[i]; 
       } 
   }
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
