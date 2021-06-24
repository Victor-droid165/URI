/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Animal;
*/

#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);

	map< string, map< string, map<string,string> > > animais = 
	{
		{"vertebrado", { { "ave", { {"carnivoro", "aguia"}, {"onivoro", "pomba"} } },
						 { "mamifero", { {"herbivoro", "vaca"}, {"onivoro", "homem"} } }}
		},
		{"invertebrado", { { "inseto", { {"hematofago", "pulga"}, {"herbivoro", "lagarta"} } },
						 { "anelideo", { {"hematofago", "sanguessuga"}, {"onivoro", "minhoca"} } }}
		}
	};
	string estruturaOssea, classe, digestao;
	getline(cin, estruturaOssea);
	getline(cin, classe);
	getline(cin, digestao);
	
	cout << animais[estruturaOssea][classe][digestao] << endl;
	
    return 0;
}
