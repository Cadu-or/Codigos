/* Problem: 1277 - Short Attendance */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int loop;

    cin >> loop;

    while(loop--){
        int alunos;
        cin >> alunos;
        int flag = 0;

        vector <string> aluno;
        vector <string> freq;

        for(int i = 0; i < alunos; i++){
            string nome;
            cin >> nome;

            aluno.push_back(nome);
        }

        vector <string> reprovados;

        for(int i = 0; i < alunos; i++){
            string frq;
            cin >> frq;

            int P = 0, M = 0, A = 0;

            float presenca = frq.length();
            for(int j = 0; j < frq.length(); j++){
                if(frq[j] == 'P'){
                    P++;

                }else if (frq[j] == 'M'){
                    presenca--;

                }else{
                    A++;
                }
            }

            if(P < (presenca * 0.75)){
                reprovados.push_back(aluno[i]);
            }

        }

        if(reprovados.size() != 0){
            for(int i = 0; i < reprovados.size(); i++){
                if(i == reprovados.size() - 1){
                    cout << reprovados[i] << endl;
                }else{
                    cout << reprovados[i] << ' ';
                }
            }

        }else{
            cout << endl;
            
        }

    }    


    return 0;
}