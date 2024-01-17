/*
#include <iostream>		// biblioteca para entrada e saída de dados (in e out)

using namespace std;	// substitui o std:
						// std::string palavra = "";
						// std::cout << "saída" << palavra;
						// int x = 3, y = 6;
						// std::cout << x + y;
*/

// DECLARAÇÃO DE VARIÁVEIS
/*
	int x = 0;
	cout << "Value of x is: " << x << '\n';

	char letter = 'a';
	cout << "Value of letter is: " << letter << '\n';

	string word = "word";
	cout << "Value of word is: " << word << '\n';

	// existem 3 maneiras de inicializar uma variável:
	double z{};
	string gun = "";
	int y();

	int a = 10;
	int b(10);
	int c{ 10 }; // é bom utilizar dessa forma sempre que possível, pois gera ganho de desempenho
*/

// OPERADORES
/*
	::			->	resolução de escopo (std)
	++			->	incremento 
	--			->	decremento
	()			->	chamada de função
	[]			->	elemento de arranjo
	.			->	seleção de elemento por identificador
	->			->	seleção de elemento por ponteiro
	+			->	adição
	-			->	subtração
	*			->	multiplicação
	/			->	divisão
	%			->	módulo
	!			->	não lógico
	~			->	complemento
	(tipo)		->	conversão de tipo de dado
	*			->	desreferência
	&			->	referência (endereço de elemento)
	sizeof		->	tamanho de elemento
	new []		->	alocação dinâmica de memória
	delete []	->	desalocação dinâmica de memória
	.* ->*		->	ponteiro para membro
	<< >>		->	deslocamento de bits à esquerda e à  l direita
	< <=		->	"menor que" e "menor ou igual que"
	> >=		->	"maior que" e "maior ou igual que"
	==			->	"igual a"
	!=			->	"diferente de"
	&&			->	"E" lógico
	||			->	"OU" lógico
	c ? t :	f	->	condição ternária
	=			->	atribuição
	+=			->	atribuição por adição
	-=			->	atribuição por subtração
	*=			->	atribuição por multiplicação
	/=			->	atribuição por divisão
	%=			->	atribuição por módulo (resto)
	<<= >>=		->	atribuição por deslocamento de bits
	&= ^= !=	->	atribuição por operações lógicas
	throw		->	lançamento de exceção
	,			->	vírgula

	a = b		->	atribuição
	a()			->	chamada de função
	a[]			->	elemento de arranjo
	*a			->	de referência
	&a			->  referência
	a -> b		->	membro de ponteiro
	a.b			->	membro de identificador
	a.*b		->	de referência de membro identificador
	a->*b		->	de-referência de membro identificador
	(tipo)a		->	conversão de tipo de dados
	a,b			->	vírgula
	a ? b :c	->	condição ternária
	a::b		->	resolução de escopo
	sizeof a	->	tamanho de
	typeid()	->	identificador de tipo
*/

// FUNÇÕES
/*
	#include <iostream>

	// criação da função
	void minha_funcao(){
		std::cout << "Olá, mundo!\n";
	}

	main(){
		//chamada da função
		minha_funcao();

		return 0;
	}

	------------------------------------------------------------------------------------------

	-> O tipo de uma função está diretamente relacionado ao tipo de retorno da função.
	--> Funções tipo void não tem e não devem ter retorno.
	---> Mas todos os tipos que podemos atribuir à variáveis também são atribuíveis à funções:
				int, std::string, float, bool e void.
	----> As mesmas regras para criação de nomes de variáveis se aplicam a criação para nomes de funções.
		
	------------------------------------------------------------------------------------------

	#include <iostream>
	using namespace std;

	int soma(int x, int y){
		return x + y;
	}

	int main(){
		cout << soma(3, 6) << '\n';
		return 0;
	}

	------------------------------------------------------------------------------------------

	Funções da biblioteca padrão: STL (Standard Template Library) do C++

	-> Converter para MAIÚSCULA: toupper()
		#include <iostream>
		
		int main(){
			char a = 'a';
			std::cout << a << '\n';

			toupper(a);

			a = toupper(a);
			std::cout << a << '\n';

			return 0;
		}

	-> Converter para MINÚSCULA: tolower()
	-> Verificar se É LETRA: isalpha()
	-> Verificar se É NÚMERO: isdigit()
	Entre outras...

	------------------------------------------------------------------------------------------

	PROTÓTIPOS de funções são utilizados para facilitarmos o trabalho do compilador e o mesmo gerar um binário sem buracos.
	Exemplo:

		#include <iostream>

		// criação de protótipo
		int produto(int, int);	

		int main(){
			std::cout << "O produto de 9 x 5 é: " << produto(9, 5) << '\n';
			return 0;
		}

		int produto(int x, int y){
			return x * y; 
		}
*/

// HEADERS E CABEÇALHOS
/*
	~ Adicionando o código em bibliotecas

	As bibliotecas criadas por você mesmo precisam estar entre "aspas duplas". Somente as do sistema que devem ser usados <>.
	Exemplo:

			// main.cpp
			#include <iostream>
			#include "minhaBiblioteca.h" // as extensões de biblioteca também podem ser .hpp, .hh, ...

			int main(){
				std::cout << "O produto de 9 x 2 é: " << produto(9, 3) << '\n';
				return 0;
			}

			// minhaBiblioteca.h
			int produto(int x, int y){
				return x * y;
			}
	
	------------------------------------------------------------------------------------------

	~ Compilando múltiplos arquivos

	Quando usamos protótipos, geralmente separamos o protótipo em um arquivo.h e a execução da função separamos em um arquivo.cpp de mesmo nome.
	Exemplo:

			// main.cpp
			#include <iostream>
			#include "minhaBiblioteca.h" 

			int main(){
				std::cout << "O produto de 9 x 2 é: " << produto(9, 3) << '\n';
				return 0;
			}

			// minhaBiblioteca.h			----> REVISAR ESTA PARTE
			int produto(int, int);

			// minhaBiblioteca.cpp			----> NÃO CONSEGUI FAZER FUNCIONAR
			int produto(int x, int y){
				return x * y;
			}

*/

#include <iostream>
#include "minhaBiblioteca.h" // as extensões de biblioteca também podem ser .hpp, .hh, ...

int main() {

	
	return 0;
}
