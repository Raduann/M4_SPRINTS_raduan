#include <iostream>
#include <string>
using namespace std;

// 1 -  Faça uma função que recebe uma certa medida e ajusta ela percentualmente 
// entre dois valores mínimo e máximo e retorna esse valor

float converteSensor(int medida, int minimo, int maximo){

	cout << "Dado o intervalo estabelecido, temos os valores:"<<endl;
	cout << maximo <<endl;
	cout << minimo <<endl;
    float intervalo = maximo - minimo;
    float valor = medida - minimo;

    float resultado = valor/intervalo;
  return resultado;
}

// Descomente a função main abaixo para testar o exercício 1
int main(){
  cout << "Teste Ex 1" << endl;
        cout << converteSensor(100,100,400) << endl;
  //valor esperado: 0

        cout << converteSensor(400,100,400) << endl;
  //valor esperado: 1

        cout << converteSensor(250,100,400) << endl;
  //valor esperado: 0.5
}

// 2 - Faça uma função que simule a leitura de um sensor lendo o 
// valor do teclado ao final a função retorna este valor


int leComando() {
	int valor;
	cin >> valor;
	return valor;
}

// Descomente a função main abaixo para testar o exercício 2
// int main(){
//   cout << "Digite o Comando (0 ou 1):";
//         int cmd = leComando();
//         cout << "Comando Recebido: " << cmd << endl;
// }


// 3 - Faça uma função que armazena uma medida inteira qualquer 
// em um vetor fornecido. Note que como C não possui vetores 
// nativos da linguagem, lembre-se que você precisa passar o 
// valor máximo do vetor assim como a última posição preenchida
// Evite também que, por acidente, um valor seja escrito em 
// uma área de memória fora do vetor

static int posicao = 0;
void armazenaVetor(int elemento, int valorMax, int Vetor[]){
  if(posicao > valorMax){
    cout << "Erro: indice atingiu valor maximo"
  }else{
    Vetor[posicao] = elemento;
    posicao++;
  }
}

// Descomente a função main abaixo para testar o exercício 3
// int main(){
//   int valorMax = 10;
//   int vetor[valorMax];

//   armazenaVetor(9, valorMax, lastPos, vetor);
//   armazenaVetor(8, valorMax, lastPos, vetor);
//   armazenaVetor(7, valorMax, lastPos, vetor);
//   armazenaVetor(6, valorMax, lastPos, vetor);
//   armazenaVetor(5, valorMax, lastPos, vetor);
//   armazenaVetor(4, valorMax, lastPos, vetor);
//   armazenaVetor(3, valorMax, lastPos, vetor);
//   armazenaVetor(2, valorMax, lastPos, vetor);
//   armazenaVetor(1, valorMax, lastPos, vetor);
//   armazenaVetor(0, valorMax, lastPos, vetor);

//   // valor esperado: mensagem de erro "Erro: valorMax: 10, lastPos + 1 (indice): 10"

//   cout << vetor[0] << endl; // valor esperado: 9
//   cout << vetor[1] << endl; // valor esperado: 8
//   cout << vetor[2] << endl; // valor esperado: 7
//   cout << vetor[3] << endl; // valor esperado: 6
//   cout << vetor[4] << endl; // valor esperado: 5
//   cout << vetor[5] << endl; // valor esperado: 4
//   cout << vetor[6] << endl; // valor esperado: 3
//   cout << vetor[7] << endl; // valor esperado: 2
//   cout << vetor[8] << endl; // valor esperado: 1
//   cout << vetor[9] << endl; // valor esperado: 0
// }




// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.

string dirMaiorDist(int Vetor[]) {
  int dir = Vetor[0]; 
  int esq = Vetor[1]; 
  int frente = Vetor[2]; 
  int tras = Vetor[3]; 
  sort(Vetor, Vetor + 4);
  int maiorNum = Vetor[3];

  if(maiorNum == dir){
    return "direita";
  } 
  else if(maiorNum == esq){
    return "esquerda";
  } 
  else if(maiorNum == frente){
    return "frente";
  } 
  else{
    return "tras";
  }

}

int maiorDist(int Vetor[]) {
  sort(Vetor, Vetor + 4);
  int maior = Vetor[3];
  return maior;
}

// Descomente a função main abaixo para testar o exercício 4
// int main(){

// //Considere que os valores sempre serão distintos
// //Considere valores de distância inteiros entre 0 e 100

// // "Direita", "Esquerda", "Frente", "Tras"
// int posicoes [4] = {0, 20, 100, 50};

// cout << dirMaiorDist(posicoes) << endl;
// //valor esperado: Frente

// cout << maiorDist(posicoes) << endl;
// //valor esperado: 100


// // "Direita", "Esquerda", "Frente", "Tras"
// int posicoes2 [4] = {95, 70, 80, 50};

// cout << dirMaiorDist(posicoes2) << endl;
// //valor esperado: Direita

// cout << maiorDist(posicoes2) << endl;
// //valor esperado: 95


// // "Direita", "Esquerda", "Frente", "Tras"
// int posicoes3 [4] = {10, 0, 50, 60};

// cout << dirMaiorDist(posicoes3) << endl;
// //valor esperado: Tras

// cout << maiorDist(posicoes3) << endl;
// //valor esperado: 60


// // "Direita", "Esquerda", "Frente", "Tras"
// int posicoes4 [4] = {54, 55, 30, 0};

// cout << dirMaiorDist(posicoes4) << endl;
// //valor esperado: Esquerda

// cout << maiorDist(posicoes4) << endl;
// //valor esperado: 55
// }


// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso

int continuar() {
  int input = 0;
  cout << "Gostaria de encerrar o progrma? Se sim digite 0, se deseja continuar digite 0" << endl;
  
  cin >> input;

  if(input > 1 || input < 0){
		cout << "Inserir apenas os numeros um ou zero." << endl
		continuar();
	}
	else{
		  if (input == 1) {
    return 1;
  } 
  else {
    return 0;
  }

	}

}

// Descomente a função main abaixo para testar o exercício 5

// int main() {
//   int parar = 0;

//   while (parar == 0) {
//     parar = continuar();
//   }
//   // A função deve perguntar: "Digite 1 para parar o mapeamento!"
//   // Se o usuário digitar 1, deve sair do loop while declarado acima
//   // Em caso contrário, continua no loop acima e pergunta novamente

//   return 1;
// }

//M


//ma
//int main() {
//	
//}





