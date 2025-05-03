#include <iostream>
using namespace std;

int main() {
   cout << "*************************************" << endl;
   cout << "* Bem-vindo ao jogo de adivinhação! *" << endl;
   cout << "*************************************" << endl;
   
   const int NUMERO_SECRETO = 22;
   
   bool nao_acertou = true;
   int tentativas = 0;
   
   while(nao_acertou){
       tentativas++;
       cout << "Tentativa: " <<tentativas<<endl;
       int chute;
       cout << "Qual o seu chute?" << endl;
       cin >> chute;
       
       cout << "O valor do seu chute é: " <<chute<<endl;
       
       bool acertou = chute == NUMERO_SECRETO;
       bool maior = chute > NUMERO_SECRETO;
       
       if(acertou){
        cout << "Parabéns você acertou o número secreto!" << endl;
        nao_acertou = false;
       } 
       else if (maior){ 
        cout << "Seu chute foi maior do que o número secreto." << endl;
       } 
       else { 
        cout << "Seu chute foi menor do que o número secreto." << endl;
     }
  }
  cout <<"Fim de jogo" <<endl;
  cout <<"Você acertou o número secreto em " << tentativas << " tentativas" <<endl;
}