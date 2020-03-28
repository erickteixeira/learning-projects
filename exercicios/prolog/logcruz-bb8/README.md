## Jogo de Logica Coquetel 

### Introdução 

* O nosso trabalho trata-se da resolução de um problema de logica da revista coquetel. Na qual, o grupo ficou encarregado de resolver o exercício das páginas 14 e 15, o problema fala sobre uma corrida de motos onde vão participar 5 casais e pede-se a composição dos casais, suas posições e a moto que estavam a usar. 
* Para a solução do problema iremos usar o Prolog, usando um serie de fatos e regras para ver as possibilidades de solução da situação. 

### Uso

* O uso do programa consiste em questionar ao prolog, se as afirmações de entrada são verdadeiras ou falsas além de, se desejadol, mostrar a resposta completa para o problema.
* Entradas esperadas: perguntas em forma de afirmações ou a solução geral.
* Saída produzida: verdadeiro ou falso, ou solução geral.

### Regras

 * Regra 1: Olavo e sua mulher (que competiram na moto Dulcimer) terminaram em algum lugar após Flávia e seu marido.
 * Regra 2: O casal que dirigiu a moto Kaziwaki terminou na segunda colocação.
 * Regra 3: Queiroz ( que terminou na quinta colocação) não é casado com Raquel( que guiou a moto Hinda).
 * Regra 4: Vicente e sua mulher terminaram na quarta colocação.
 * Regra 5: Luna e seu marido ficaram logo atrás de Bruno e Diana.
 * Regra 6: Sheila e seu marido competiram na moto Victory.
* A priori o grupo definiu os fatos como exemplo: homem, mulher, posição e marca da moto usada. Após isso o grupo definiu as regras como: possibilidades de casais , posições e marca usada.

### Exemplos

* Como saber que casal chegou em primeiro lugar? A pergunta deve ser feita como abaixo:
* -? posicao(1,X,Y,M)

### Orientação

* Autor: Prof. Dr. Ruben Carlo Benante
* Email: rcb@upe.br
* Data: 2017-09-21
* Licensa: GNU/GPL v2.0

