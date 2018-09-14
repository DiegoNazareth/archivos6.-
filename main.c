#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctype.h>
#include <cstring>

using namespace std;

void LineaALinea(char*);

int main(int argc, char *argv[]){
	int i=1;; 
	for(i=1;i<argc;i++){
		LineaALinea(argv[i]);
	}
	system("PAUSE");
}

void LineaALinea(char *NomArc){
	fstream archivo;
	char palabra[30];
	archivo.open(NomArc, ios::in);
	if(!archivo){
		cout<<"No pudo abrirse el archivo";
	}
	archivo.clear();
	archivo.seekg(0);
	while(!archivo.eof()){
		archivo>>palabra;
		palabra[0]=toupper(palabra[0]);
		cout<<left<<setw(15)<<palabra<<right<<setw(5)<<strlen(palabra)<<endl;
	}
}
