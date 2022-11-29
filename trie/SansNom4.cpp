/*
  Exo : Trier un tableau d'entier

  Exemple : 
  Soit un tableau de 5 éléments tab : [10, 8, 5, 15, 9]
  Le résultat du trie doit afficher : [5, 8, 9, 10, 15]
*/
#include <iostream>
using namespace std;

int main()
{
    int tab[100];
   
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tab[i];
    }
    
    cout << endl;
    for(int i=0; i < n; i++) {
        cout << tab[i] << "\t";
    }
    
    //Mettre l'algorithme de trie ici...
    for(int i=0; i < n-1; i++) {
    	for(int j=i+1 ; j<n; j++){
		
        	if(tab[i]>tab[j]){
        	   int x=tab[i];
        		tab[i]=tab[j];
        		tab[j]=x;
        	}
 	}
 }
    cout << endl << "Après trie" << endl;
    
    for(int i = 0; i < n; i++){
        cout << tab[i] << "\t";
    }
    return 0;
}
