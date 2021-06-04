/* Problem: 1103 - Alarm Clock */
 
#include <bits/stdc++.h>

using namespace std;

int main(){
    int h1, m1, h2, m2, t1, t2;

    while(1){

        cin >> h1 >> m1 >> h2 >> m2;

        if(h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0){
            break;
        }

        t1 = (60 * h1) + m1;
        t2 = (60 * h2) + m2;

        if(t2 > t1){
            cout << t2 - t1 << endl;

        }else{
            cout << 1440 + (t2-t1) << endl;
        }

    }

    return 0;
}