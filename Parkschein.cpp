#include <stdio.h>
#include <iostream>

using namespace std;

//Variablendeklaration
int iZeit=0;
double dBetrag=0.0;
char cTaste; //Taste
const int iTakt=15; //Zeittakt
const double dEinheit=0.5;

int main(){
	cout<<"Druecken Sie die Taste um die Parkdauer um 15min zu erhoehen!"<<endl;

	//EIngabe
	cin>>cTaste;


	//Verarbeitung
	if(cTaste==true){
		iZeit+=iTakt;
		dBetrag=dEinheit*iZeit/iTakt;
	}else{
		return 0;

	//Ausgabe
		cout<<"Die Parkzeit betraegt: "<<iZeit<< "Minuten."<<endl
			<<"Sie muessen "<<dBetrag<< " € bezahlen.";
	}
}
Diese Zeile ist nur zum testen

