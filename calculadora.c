#include <stdio.h>
#include <math.h>

//funções
// potencialização
float elevar (float a, float b) {
    float c = pow(a,b);
    return c;
}
//soma
float somar (float a,float b) {
    float c = a+b;
    return c;
}
//subtração
float subtrair (float a,float b) {
    float c = a-b;
    return c;
}
//multiplicação
float multiplicar (float a,float b) {
    float c = a*b;
    return c;
}
//divisão
float dividir (float a, float b) {
    float c = a/b;
    return c;
}
//radiciação
float radiciação (float a, float b) { //use r para radiciação, ex: 3r2 (raiz quadrada de 3)
    float c;
    if (b == 0 || b==2) { 
        c = pow(a,0.5);}
    else {
        b = 1/b;
        c = pow(a,b);}
    return c;
}

int main (){
    float numeros [3] = {0}, resposta=0, controlador=0;
    char operador;


    scanf("%f%c%f", &numeros[0],&operador, &numeros[1]);

while (controlador==0)
{
    switch (operador)
    {
        case '+': { //soma
            resposta = somar(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case '-': { //subtrai
            resposta = subtrair(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case '/': { //divide
            resposta = dividir(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case '*': { // bloco multiplica
            resposta = multiplicar(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case 'x': { 
            resposta = multiplicar(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case 'X': {
            resposta = multiplicar(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}
        case '^': { //bloco potencialização
            resposta = elevar(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case 'p': {
            resposta = elevar(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case 'P': {
            resposta = elevar(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case 'r': { //bloco radiciação
            resposta = radiciação(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}

        case 'R': {
            resposta = radiciação(numeros[0], numeros[1]);
            numeros[0] = resposta;
        break;}
        
        //controla a saída do looping, encerrando o programa caso o usuário deseje.
        case '?': { 
            controlador++;
        break;}
        
        case 'e': { 
            controlador++;
        break;}

        case 'E': { 
            controlador++;
        break;}              
    
    default:{ //caso o usuário coloque algum simbolo fora dos previstos, mostra um texto de operação inválida e encerra o programa
        printf("Operação inválida.\n");
        controlador++;
    }
        break;
    }
    printf("%.2f", resposta); //se quiser mais casas decimais como resposta, delete o .2
    scanf(" %c%f", &operador, &numeros[1]);

} //fim while
    printf("\nPrograma finalizado\n");
    
    return 0;
} 

