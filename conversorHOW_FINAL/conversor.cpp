#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <cmath>

using namespace std;//� UM SOBRENOME PARA TIPOS, FUN��ES E ETC. � UMA FORMA DE EVITAR NOMES IGUAIS FAZENDO TRABALHOS DIFERENTES COLIDIREM

int ConverteBiDec(long long);
long long converteDecBi(int);

int main(){
  setlocale(LC_ALL, "Portuguese");//USADO PARA ACENTUAR PALAVRAS EM PORTUGU�S
  long long n;
  int inicio = 1;
  while(inicio=1)//PERMITE QUE UM CERTO TRECHO DE PROGRAMA SEJA EXECUTADO ENQUANTO UMA CERTA CONDI��O FOR VERDADEIRA
{
                              //MENU DA CALCULADORA
           cout << "DESENVOLVIDO POR -> ELUAN/DANILO/RAFAEL/VITOR/ARTHUR/JOAQUIN" << endl;
           cout << endl;
           cout << "OBRIGADO POR USAR NOSSA CALCULADORA" << endl;
           cout << endl;
           cout << endl;
           cout << "����BEM VINDO A CALCULADORA DE BASES���" << endl;
           cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�" << endl;
           cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n" << endl;
           cout << "ESCOLHA UMA DAS OP��ES" << endl;

  int menu;

          cin >> menu;

  system("clear||cls");//SERVE PARA LIMPAR O CONSOLE A CADA COMANDO
  if(menu == 1){


               //CONVERS�O DE DECIMAL/BIN�RIO

    long long decimal, binario[20], i=0;
    cout << "Digite o numero em Decimal:" <<endl;
    cin >> decimal;
    while(decimal!=0)
    {
        binario[i] = decimal%2;
        i++;
        decimal = decimal / 2;
    }
    cout << "\nEm bin�rio �: ";
    for(i=(i-1); i>=0; i--)
    cout << binario[i];
    cout << endl;

    system("pause");//PAUSA O CONSOLE DEPOIS DO COMANDO SOLICITADO
    system("clear||cls");


  }else{
  if(menu == 2){

                   //CONVERS�O DE BIN�RIO/DECIMAL

        cout << "Calculando bin�rio para decimal!" << endl;
        cout << endl;
        cout << "Digite o n�mero em Bin�rio:" << endl;
        cin >> n;
        cout << "\nO valor " << n; cout << " em decimal �: " << ConverteBiDec(n) << endl;
        cout << endl;

    system("pause");
    system("clear||cls");//LIMPAR O CONSOLE A CADA COMANDO
    }
}
}

  return 0;
}


ConverteBiDec(long long n){
  int Dec = 0, i = 0, sobra;
  while (n!=0){
        sobra = n%10;
        n /= 10;
        Dec += sobra*pow(2,i);
        ++i;
}

    return Dec;
}
