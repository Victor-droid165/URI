/*
  @autor: Victor E. B. Rodrigues;
  @data: 23/06/2021;
  @nome: Média 3;
*/

#include <bits/stdc++.h>
#include <map>
#include <iomanip>

using namespace std;

double calculaMediaPonderada(multimap<double, int> &notaPeso){
	multimap<double,int>::iterator it = notaPeso.begin();
	double media = 0; int somaPesos= 0;
	do{
		media+= (it->first) * (it->second);
		somaPesos+= it->second;
		it++;
	}while(it != notaPeso.end());
	media/=somaPesos;
	return media;
}

bool estaAprovado(double &media){
	if(media >= 7)
		return true;
	return false;
}

double fazExame(double &media){
	double notaExame;
	cin >> notaExame;
	cout << "Nota do exame: " << notaExame << endl;
	return (media+notaExame)/2.0;
}

void printaSituacao(double &media){
	if(estaAprovado(media))
		cout << "Aluno aprovado." << endl;
	else if(media >= 5){
		cout << "Aluno em exame." << endl;
		media = fazExame(media);
		if(media>=5){
			cout << "Aluno aprovado." << endl;
		} else{
			cout << "Aluno reprovado." << endl;
		}
		cout << "Media final: " << media << endl;
	} else
		cout << "Aluno reprovado." << endl;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(0);
	
	multimap<double, int> notaPeso;
	double n1,n2,n3,n4;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	notaPeso.insert(pair <double,int> (n1,2) );
	notaPeso.insert(pair <double,int> (n2,3) );
	notaPeso.insert(pair <double,int> (n3,4) );
	notaPeso.insert(pair <double,int> (n4,1) );

	cout << setprecision(1) << fixed;
	double media = calculaMediaPonderada(notaPeso);
	cout << "Media: " << media << endl;
	printaSituacao(media);
    
    return 0;
}
