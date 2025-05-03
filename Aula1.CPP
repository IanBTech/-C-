#include <iostream>
using namespace std;

int main() {
   cout << "*************************************" << endl;
   cout << "* Bem-vindo ao jogo de adivinhacao! *" << endl;
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
       
       cout << "O valor do seu chute e: " <<chute<<endl;
       
       bool acertou = chute == NUMERO_SECRETO;
       bool maior = chute > NUMERO_SECRETO;
       
       if(acertou){
        cout << "Parabens voce acertou o numero secreto!" << endl;
        nao_acertou = false;
       } 
       else if (maior){ 
        cout << "Seu chute foi maior do que o numero secreto." << endl;
       } 
       else { 
        cout << "Seu chute foi menor do que o numero secreto." << endl;
     }
  }
  cout <<"Fim de jogo" <<endl;
  cout <<"Voce acertou o numero secreto em " << tentativas << " tentativas" <<endl;
}