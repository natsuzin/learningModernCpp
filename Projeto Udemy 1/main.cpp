/*
#include <iostream>		// biblioteca para entrada e sa�da de dados (in e out)

using namespace std;	// substitui o std:
						// std::string palavra = "";
						// std::cout << "sa�da" << palavra;
						// int x = 3, y = 6;
						// std::cout << x + y;
*/

// DECLARA��O DE VARI�VEIS
/*
	int x = 0;
	cout << "Value of x is: " << x << '\n';

	char letter = 'a';
	cout << "Value of letter is: " << letter << '\n';

	string word = "word";
	cout << "Value of word is: " << word << '\n';

	// existem 3 maneiras de inicializar uma vari�vel:
	double z{};
	string gun = "";
	int y();

	int a = 10;
	int b(10);
	int c{ 10 }; // � bom utilizar dessa forma sempre que poss�vel, pois gera ganho de desempenho
*/

// OPERADORES
/*
	::			->	resolu��o de escopo (std)
	++			->	incremento 
	--			->	decremento
	()			->	chamada de fun��o
	[]			->	elemento de arranjo
	.			->	sele��o de elemento por identificador
	->			->	sele��o de elemento por ponteiro
	+			->	adi��o
	-			->	subtra��o
	*			->	multiplica��o
	/			->	divis�o
	%			->	m�dulo
	!			->	n�o l�gico
	~			->	complemento
	(tipo)		->	convers�o de tipo de dado
	*			->	desrefer�ncia
	&			->	refer�ncia (endere�o de elemento)
	sizeof		->	tamanho de elemento
	new []		->	aloca��o din�mica de mem�ria
	delete []	->	desaloca��o din�mica de mem�ria
	.* ->*		->	ponteiro para membro
	<< >>		->	deslocamento de bits � esquerda e �  l direita
	< <=		->	"menor que" e "menor ou igual que"
	> >=		->	"maior que" e "maior ou igual que"
	==			->	"igual a"
	!=			->	"diferente de"
	&&			->	"E" l�gico
	||			->	"OU" l�gico
	c ? t :	f	->	condi��o tern�ria
	=			->	atribui��o
	+=			->	atribui��o por adi��o
	-=			->	atribui��o por subtra��o
	*=			->	atribui��o por multiplica��o
	/=			->	atribui��o por divis�o
	%=			->	atribui��o por m�dulo (resto)
	<<= >>=		->	atribui��o por deslocamento de bits
	&= ^= !=	->	atribui��o por opera��es l�gicas
	throw		->	lan�amento de exce��o
	,			->	v�rgula

	a = b		->	atribui��o
	a()			->	chamada de fun��o
	a[]			->	elemento de arranjo
	*a			->	de refer�ncia
	&a			->  refer�ncia
	a -> b		->	membro de ponteiro
	a.b			->	membro de identificador
	a.*b		->	de refer�ncia de membro identificador
	a->*b		->	de-refer�ncia de membro identificador
	(tipo)a		->	convers�o de tipo de dados
	a,b			->	v�rgula
	a ? b :c	->	condi��o tern�ria
	a::b		->	resolu��o de escopo
	sizeof a	->	tamanho de
	typeid()	->	identificador de tipo
*/

// FUN��ES
/*
	#include <iostream>

	// cria��o da fun��o
	void minha_funcao(){
		std::cout << "Ol�, mundo!\n";
	}

	main(){
		//chamada da fun��o
		minha_funcao();

		return 0;
	}

	------------------------------------------------------------------------------------------

	-> O tipo de uma fun��o est� diretamente relacionado ao tipo de retorno da fun��o.
	--> Fun��es tipo void n�o tem e n�o devem ter retorno.
	---> Mas todos os tipos que podemos atribuir � vari�veis tamb�m s�o atribu�veis � fun��es:
				int, std::string, float, bool e void.
	----> As mesmas regras para cria��o de nomes de vari�veis se aplicam a cria��o para nomes de fun��es.
		
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

	Fun��es da biblioteca padr�o: STL (Standard Template Library) do C++

	-> Converter para MAI�SCULA: toupper()
		#include <iostream>
		
		int main(){
			char a = 'a';
			std::cout << a << '\n';

			toupper(a);

			a = toupper(a);
			std::cout << a << '\n';

			return 0;
		}

	-> Converter para MIN�SCULA: tolower()
	-> Verificar se � LETRA: isalpha()
	-> Verificar se � N�MERO: isdigit()
	Entre outras...

	------------------------------------------------------------------------------------------

	PROT�TIPOS de fun��es s�o utilizados para facilitarmos o trabalho do compilador e o mesmo gerar um bin�rio sem buracos.
	Exemplo:

		#include <iostream>

		// cria��o de prot�tipo
		int produto(int, int);	

		int main(){
			std::cout << "O produto de 9 x 5 �: " << produto(9, 5) << '\n';
			return 0;
		}

		int produto(int x, int y){
			return x * y; 
		}
*/

// HEADERS E CABE�ALHOS
/*
	~ Adicionando o c�digo em bibliotecas

	As bibliotecas criadas por voc� mesmo precisam estar entre "aspas duplas". Somente as do sistema que devem ser usados <>.
	Exemplo:

			// main.cpp
			#include <iostream>
			#include "minhaBiblioteca.h" // as extens�es de biblioteca tamb�m podem ser .hpp, .hh, ...

			int main(){
				std::cout << "O produto de 9 x 2 �: " << produto(9, 3) << '\n';
				return 0;
			}

			// minhaBiblioteca.h
			int produto(int x, int y){
				return x * y;
			}
	
	------------------------------------------------------------------------------------------

	~ Compilando m�ltiplos arquivos

	Quando usamos prot�tipos, geralmente separamos o prot�tipo em um arquivo.h e a execu��o da fun��o separamos em um arquivo.cpp de mesmo nome.
	Exemplo:

			// main.cpp
			#include <iostream>
			#include "minhaBiblioteca.h" 

			int main(){
				std::cout << "O produto de 9 x 2 �: " << produto(9, 3) << '\n';
				return 0;
			}

			// minhaBiblioteca.h			----> REVISAR ESTA PARTE
			int produto(int, int);

			// minhaBiblioteca.cpp			----> N�O CONSEGUI FAZER FUNCIONAR
			int produto(int x, int y){
				return x * y;
			}

*/

#include <iostream>
#include "minhaBiblioteca.h" // as extens�es de biblioteca tamb�m podem ser .hpp, .hh, ...

int main() {

	
	return 0;
}
