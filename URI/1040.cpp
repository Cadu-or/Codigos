/* Problem: 1040 - Average 3 */

#include <iostream>
#include <iomanip>

int main(){
    float N1, N2, N3, N4;
    float resultado, media;

    std :: cin >> N1 >> N2 >> N3 >> N4;

    media = (2*N1 + 3*N2 + N3*4 + N4*1)/10;

    std :: cout << std :: fixed << std :: setprecision(1);

    std :: cout << "Media: " << media << std :: endl;

    if(media >= 7.0){
        std :: cout << "Aluno aprovado." << std :: endl;

    }else if(media < 5.0){
        std :: cout << "Aluno reprovado." << std :: endl;

    }else{
        std :: cout << "Aluno em exame." << std :: endl;
        float N5;
        std :: cin >> N5;
        std :: cout << "Nota do exame: " << N5 << std :: endl;
        media = (N5 + media)/2;
        if(media >= 5.0){
            std :: cout << "Aluno aprovado." << std :: endl;

        }else{
            std :: cout << "Aluno reprovado." << std :: endl;
        } 

        std :: cout << "Media final: " << media << std :: endl;

    }
    

    return 0;
}
