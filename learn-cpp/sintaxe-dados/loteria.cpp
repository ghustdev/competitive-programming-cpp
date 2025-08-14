// Flavinho sabe que a chance de ganhar na loteria é bem pequena. Ele gosta muito de estudar probabilidade! Mas, justamente por entender de probabilidades, Flavinho segue o ditado, “quem não arrisca, não petisca!”, e faz um jogo toda semana.

// Na loteria preferida dele, o jogador aposta seis números entre 1 e 99. No sorteio, também são escolhidos seis números ganhadores entre 1 e 99. Quem acerta 3, 4, 5 ou 6 números ganha como prêmio, respectivamente, um “terno”, uma “quadra”, uma “quina” ou uma “sena”.

// Nesta tarefa, você deve escrever um programa que diga qual foi o prêmio que Flavinho ganhou, dados os seis números que ele apostou e os seis números que foram sorteados.

#include <bits/stdc++.h>

using namespace std;

int main() {

    int vet1[6], vet2[6], i, k, count = 0;

    for (i = 0; i < 6; i++) {
        cin >> vet1[i];
    }

    for (i = 0; i < 6; i++) {
        cin >> vet2[i];
        for (k = 0; k < 6; k++) {
            if (vet2[i] == vet1[k])
                count++;
        }
    }

    switch (count) {
        case 3: cout << "terno\n"; break;
        case 4: cout << "quadra\n"; break;
        case 5: cout << "quina\n"; break;
        case 6: cout << "sena\n"; break;
        default: cout << "azar\n";
    }

    return 0;
}
