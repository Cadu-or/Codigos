/*Problem: 1234 - Dancing Sentence */

#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    string ans;
    int first = 0;
    bool upper;
    
    while(getline(cin, str)){
        
        for(int i = 0; str[i] != '\0'; i++){
            if(first == 0){
                if(str[i] >= 97 and str[i] <= 122){
                    ans[i] = str[i] - 32;
                    first = 1;
                    upper = true;

                }else if(str[i] >= 65 and str[i] <= 90){
                    ans[i] = str[i];
                    first = 1;
                    upper = true;

                }else{
                    ans[i] = str[i];
                    first = 0;
                }

            }else{
                if((str[i] >= 97 and str[i] <= 122) or (str[i] >= 65 and str[i] <= 90)){
                    if(upper == true and str[i] >= 97 and str[i] <= 122){
                        ans[i] = str[i];
                        upper = false;

                    }else if(upper == true and str[i] >= 65 and str[i] <= 90){
                        ans[i] = str[i] + 32;
                        upper = false;

                    }else if(upper == false and str[i] >= 65 and str[i] <= 90){
                        ans[i] = str[i];
                        upper = true;
                    
                    }else if(upper == false and str[i] >= 97 and str[i] <= 122){
                        ans[i] = str[i] - 32;
                        upper = true;
                    }

                }else{
                    ans[i] = str[i];
                }
            }
        }

        for(int j = 0; j < str.length(); j++){
            cout << ans[j];
        }
        cout << endl;

        first = 0;
    }

    return 0;
}