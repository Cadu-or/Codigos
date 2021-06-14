/* Problem: 2144 - Bodybuilder */

#include <iostream>

using namespace std;

int main(){
    float A,B,C; 
    float media1, media2;

    while(1){
        cin >> A >> B >> C;
        if((A == 0) && (B == 0) && (C == 0)){
            cout << endl << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;
            break;
        }

        media1 = A*(1+(C/30));
        media2 = ((B*(1+(C/30))) + media1)/2;

        if((media2 <= 1) || (media2 < 13)){
            cout << "Nao vai da nao" << endl;

        }else if ((media2 <= 13) || (media2 < 14)){
            cout << "E 13" << endl;
            
        }else if ((media2 <= 14) || (media2 < 40)){
            cout << "Bora, hora do show! BIIR!" << endl;
            
        }else if ((media2 <= 40) || (media2 <= 60)){
            cout << "Ta saindo da jaula o monstro!" << endl;
            
        }else if (media2 > 60){
            cout << "AQUI E BODYBUILDER!!" << endl;
            
        }

    }


    return 0;
}
