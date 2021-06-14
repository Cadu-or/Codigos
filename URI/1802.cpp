/* Problem: 1802 - Books Catalog */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> livros[100];
vector<int> answer;

bool comp(int a, int b) { return a > b; }

int main() {

	int n, x;
	for(int i = 0 ; i < 5; i++){
		cin >> n;
		for(int j = 0; j <  n; j++){
			cin >> x;
			livros[i].push_back(x);
		}
	}
	for(int i = 0 ; i < livros[0].size(); i++){
		for(int j = 0 ; j < livros[1].size(); j++){	
			for(int k = 0 ; k < livros[2].size(); k++){	
				for(int l = 0 ; l < livros[3].size(); l++){	
					for(int m = 0 ; m < livros[4].size(); m++){	
						answer.push_back(livros[0][i] + livros[1][j] + livros[2][k] + livros[3][l] + livros[4][m]);
                    }
                }
            }
        }
    }

	sort(answer.begin(),answer.end(),comp);

	cin >> n;
	int resultado = 0;

	for(int i = 0 ; i < n; i++){
		resultado += answer[i];
    }

	cout << resultado << endl;

	return 0;
}
