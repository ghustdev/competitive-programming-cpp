#include <bits/stdc++.h>

using namespace std;

int main()
{
    // A estrutura do cout é:
    // cout << valor1 << valor2 << ...;
    cout << 1898 << endl;
    cout << 3 << ' ' << 1 << endl;

    // Podemos realizar operações com os números no C++
    // + -> adição
    // - -> subtração
    // / -> divisão
    // * -> multiplicação
    // % -> módulo, ou seja, a % b = resto da divisão inteira de a por b. Ex.: 8 % 5 = 3
    cout << 2 * 3 * 5 * 7 << endl;

    // Também é possível imprimir frases (de maneira geral, vários caracteres de uma vez só)
    // usando as aspas duplas para indicar que é uma string (o nome não importa agora), assim:
    cout << "Olá mundo!" << endl;

    //----------------------------------------------------------

    // Para declarar uma variável usamos
    // tipo nome;
    // ou
    // tipo nome = valor;

    int idade = 33;
    bool vivo = true;
    char letra_favorita = 'x';
    double dolar = 1.5;

    // Para atualizar o valor de uma varíavel usamos:
    // nome = valor;

    vivo = false;
    dolar = dolar + 1; // dolar vira 2.5
    letra_favorita = 'L';

    // As variáveis funcionam exatamente como o valor que representam, ou seja, podem ser ultilizadas em operações,
    // serem imprimidas, designadas como o valor de outra, etc.
    // Ex.:

    idade = idade + 1;           // idade é igual a 34
    cout << dolar - 0.5 << endl; // imprime: 2
    // A operação no cout acima não atualiza o valor da variável, pois não usamos nenhum símbolo de =
    cout << "Minha letra favorita é: " << letra_favorita << endl;
    // imprime: Minha letra favorita é: L

    //----------------------------------------------------------

    double salario, altura;
    char genero;
    string nome;

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    nome = "Maria Silva";

    cout << fixed << setprecision(2);
    cout << "IDADE = " << idade << endl;
    cout << "SALARIO = " << salario << endl;
    cout << "ALTURA = " << altura << endl;
    cout << "GENERO = " << genero << endl;
    cout << "NOME = " << nome << endl;

    //----------------------------------------------------------

    int anos_de_trabalho;
    double saldo_bancario;
    string nome_do_usuario;

    // o cin funciona assim:
    // cin >> variavel1 >> variavel2 >> ... >> variaveln;
    // Ele recebe todos os valores em ordem, automaticamente pula linhas, espaços, etc,
    // chegando direto no valor desejado
    cin >> anos_de_trabalho >> saldo_bancario >> nome_do_usuario;

    // Imprimimos a resposta
    cout << saldo_bancario / anos_de_trabalho << endl << "Nome: " << nome_do_usuario << endl;

    return 0;
}