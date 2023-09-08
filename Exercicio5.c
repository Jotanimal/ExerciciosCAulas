#include <stdio.h>

int main() {

  int idadeAtual, anoNascimento, idadeFutura, anoAtual, anoDesejado;

  printf("Olá, digite seu ano de nascimento para saber quantos anos terá em um ano qualquer: ");
  scanf("%d", &anoNascimento);

  printf("Agora digite o ano Atual: ");
  scanf("%d", &anoAtual);

  printf("Digite o ano no qual você deseja saber sua idade: ");
  scanf("%d", &anoDesejado);
    
  // cálculo da idade o cálculo ficou extremamente simples. Poderia ser mais robusto, dependendo
  // do mês e dia no qual a pessoa nasceu e sabendo o ano atual para ter
  // resultados diferentes, porém ainda estou quebrando a cabeça pra deixar ele
  // dessa forma.

  idadeAtual = anoAtual - anoNascimento;
  
  idadeFutura = anoDesejado - anoNascimento;

  printf("Você tem %d. Em %d você terá %d.", idadeAtual, anoDesejado, idadeFutura);
  return 0;
}
