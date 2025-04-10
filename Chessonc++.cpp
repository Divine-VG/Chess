#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void afis(string arr[][9])
{
    cout << "\n  -----------------------------------------";
    for (int i = 1; i <= 8; i++)
    {
        cout << "\n" << i << " | ";
        for (int j = 1; j <= 8; j++)
        {
            if (arr[i][j] == "")
                cout << " ";
            cout << arr[i][j] << "  | ";
        }
        cout << "\n  -----------------------------------------";
    }
    cout << "\n-   1    2    3    4    5    6    7    8\n";
}
	string a[9][9] ;
	int main() {
		int  i, j, curLine, curCol, moveLine, moveCol, k = 0, ii, k1 = 0, ok = 0, k2 = 0, k5 = 0,kk = 0, k0 = 0, kkk = 0, cod, rod, ro, co, ros, cos, koko = 0, kokoko = 0;
		bool obs;
		string id = "nig";
		a[1][1] = "♜";
		a[1][2] = "♞";
		a[1][3] = "♝";
		a[1][4] = "♛";
		a[1][5] = "♚";
		a[1][6] = "♝";
		a[1][7] = "♞";
		a[1][8] = "♜";
		a[2][1] = "♟️";
		a[2][2] = "♟️";
		a[2][3] = "♟️";
		a[2][4] = "♟️";
		a[2][5] = "♟️";
		a[2][6] = "♟️";
		a[2][7] = "♟️";
		a[2][8] = "♟️";
		a[7][1] = "♙";
		a[7][2] = "♙";
		a[7][3] = "♙";
		a[7][4] = "♙";
		a[7][5] = "♙";
		a[7][6] = "♙";
		a[7][7] = "♙";
		a[7][8] = "♙";
		a[8][1] = "♖";
		a[8][2] = "♘";
		a[8][3] = "♗";
		a[8][4] = "♕";
		a[8][5] = "♔";
		a[8][6] = "♗";
		a[8][7] = "♘";
		a[8][8] = "♖";
        afis(a);
		// for (i = 1; i <= 8; i++) {

		// 	cout << "\n"; cout << "\n" << "| ";
		// 	for (j = 1; j <= 8; j++) {
		// 		if (a[i][j] == "")
		// 			cout << "  ";
		// 		cout << a[i][j] << " | ";
		// 	}

		// }
		//afisare tabla
		//.																			partea I	tabla de inceput + piese 
		cout << "\n" << "scrie coordonatele piesei pe care ai vrea sa o muti (forma linie coloana): ";
		cin >> curLine >> curCol;
		do {
			if (a[curLine][curCol] == "") {
				cout << "\n" << "nu exista piesa pe acel patratel, incearca alt patratel: ";
				cin >> curLine >> curCol;
			}
			else {
				while (1) {
					cout << "scrie unde ai vrea sa o muti: ";
					cin >> moveLine >> moveCol; k++;
					if (moveLine > 0 && moveLine < 10 && moveCol>0 && moveCol < 10) {
						if (a[curLine][curCol] == a[moveLine][moveCol]) cout << "\n" << "ai ales acelasi patratel, incearca alta mutare, ";
						else break;
					}
					else cout << "un patratel existent te rog, ";

				}break;
			}
		} while (1);
		//																			partea II  input tabla perfectly done.....cred......

		while (1) {
			  //testing the pieces functionality && a[moveLine][moveCol] != "" || a[moveLine][moveCol] != "♙" || a[moveLine][moveCol] != "♙" || a[moveLine][moveCol] != "♙" || a[moveLine][moveCol] != "♙" || a[moveLine][moveCol] != "♙" || a[moveLine][moveCol] != "♙" || a[moveLine][moveCol] != "♙" || a[moveLine][moveCol] != "♙" || a[moveLine][moveCol] != "♖" || a[moveLine][moveCol] != "♖" || a[moveLine][moveCol] != "♘" || a[moveLine][moveCol] != "♘" || a[moveLine][moveCol] != "♗" || a[moveLine][moveCol] != "♗" || a[moveLine][moveCol] != "♕" || a[moveLine][moveCol] != "♔"
			//do {
			

			//ok = 0;
			if (ok % 2 == 1) {
				if (moveLine == 8)
				if ( a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️")
				{
					k2 = 0;
					if (a[moveLine][moveCol] == "" && curCol == moveCol && curLine + 1 == moveLine) {
						cout << "alege in ce tip de piesa vrei ca pionul tau sa se transforme, poti alege intre: r1, n1, b1 si bq";
						cin >> a[moveLine][moveCol]; a[curLine][curCol] = "";  ok++;
					}
					else k2++;
					if (curLine + 1 == moveLine && curCol - 1 == moveCol || curCol + 1 == moveCol) {
						if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♕" || a[moveLine][moveCol] == "♔")
							a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = "";  ok++;
					}
					else k2++;
					if (k2 == 2) {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				}
				//promotii pioni negri
				if (a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️" || a[curLine][curCol] == "♟️") {
					k2 = 0;
					if (a[moveLine][moveCol] == "" && curCol == moveCol && curLine + 1 == moveLine) {
						a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = "";  ok++;
					}
					else k2++;
					if (curLine + 1 == moveLine && curCol - 1 == moveCol || curCol + 1 == moveCol) {
						if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♕" || a[moveLine][moveCol] == "♔")
							a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = "";  ok++;
					}
					else k2++;
					if (k2 == 2) {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				}
				//if pentru pawns negri si capture
				if (a[curLine][curCol] == "♜" || a[curLine][curCol] == "♜") {

					k1 = 0;
					if (curLine == moveLine && moveCol > curCol) {
						for (ii = curCol + 1; ii <= moveCol - 1; ii++)
							if (a[moveLine][ii] != "")
								k1++;
					}

					if (moveLine == curLine && moveCol < curCol) {
						for (ii = moveCol + 1; ii <= curCol; ii++)
							if (a[moveLine][ii] != "")
								k1++;
					}

					if (moveCol == curCol && moveLine > curLine) {
						for (ii = curLine + 1; ii <= moveLine - 1; ii++)
							if (a[ii][moveCol] != "")
								k1++;
					}

					if (moveCol == curCol && moveLine < curLine) {
						for (ii = moveLine + 1; ii <= curLine; ii++)
							if (a[ii][moveCol] != "")
								k1++;
					}

					if (moveCol == curCol || moveLine == curLine) {
						if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♕" || a[moveLine][moveCol] == "♔") {
							if (k1 == 0) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
							else {
								cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
								cout << "unde ai vrea sa muti piesa? ";
								cin >> moveLine >> moveCol;
							}
							if (k1 != 0) {
								cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
								cout << "unde ai vrea sa muti piesa? ";
								cin >> moveLine >> moveCol;
							}
						}
						else {
							cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
							cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
						}
					}

					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}

				}
				//if pentru rooks si capture
				if (a[curLine][curCol] == "♞" || a[curLine][curCol] == "♞") {
					if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♕" || a[moveLine][moveCol] == "♔") {
						if (moveLine == curLine + 2 && moveCol == curCol - 1) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine + 2 && moveCol == curCol + 1) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine - 2 && moveCol == curCol - 1) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine - 2 && moveCol == curCol + 1) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine + 1 && moveCol == curCol - 2) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine + 1 && moveCol == curCol + 2) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine - 1 && moveCol == curCol - 2) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine - 1 && moveCol == curCol + 2) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
					}


					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? ";  cin >> moveLine >> moveCol;
					}
				}
				//if pentru caluti si capture
				if (a[curLine][curCol] == "♝" || a[curLine][curCol] == "♝") 
					if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♕" || a[moveLine][moveCol] == "♔"){
					 rod = moveLine - curLine;
					 cod = moveCol - curCol;
					if (abs(rod) == abs(cod)) {
						int ros = (rod > 0) ? 1 : -1; 
						int cos = (cod > 0) ? 1 : -1; 

						 ro = curLine + ros;
						 co = curCol + cos;
						 obs = false;

						
						while (ro != moveLine) {
							if (a[ro][co] != "") {
								obs= true;
								break;
							}
							ro += ros;
							co += cos;
						}

						if (obs) {
							cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
							cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
						}
						else {
							// Move the bishop if the diagonal path is clear
							a[moveLine][moveCol] = a[curLine][curCol];
							a[curLine][curCol] = "";
							ok++;
						}
					}
					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				}
					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				//if pentru nebunatici si captureee
				if (a[curLine][curCol] == "♛") 
					if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♕" || a[moveLine][moveCol] == "♔"){
					 rod = moveLine - curLine;
					 cod = moveCol - curCol;

						if (rod == 0 || cod == 0 || abs(rod) == abs(cod)) {
						 ros = (rod == 0) ? 0 : (rod > 0) ? 1 : -1;
						 cos = (cod == 0) ? 0 : (cod > 0) ? 1 : -1;

						 ro = curLine + ros;
						 co = curCol + cos;
						 obs = false;

						while (ro != moveLine || co != moveCol) {
							if (a[ro][co] != "") {
								obs = true;
								break;
							}
							ro += ros;
							co += cos;
						}

						if (obs) {
							{
								cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
								cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
							}
						}
						else {
							
							a[moveLine][moveCol] = a[curLine][curCol];
							a[curLine][curCol] = "";
							ok++;
						}
					}
				}
					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				//queen code 
				if (a[curLine][curCol] == "♚")
					if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♙" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♖" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♘" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♗" || a[moveLine][moveCol] == "♕" || a[moveLine][moveCol] == "♔") {
						if (moveLine == curLine + 1 || moveLine == curLine - 1 || moveCol == curCol + 1 || moveCol == curCol + 1) {
							a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++;
						}
						else {
							cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
							cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
						}
					}
					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				//king code 


				if (ok == 2) {
					for (i = 1; i <= 8; i++) {
						for (j = 1; j <= 8; j++) {
							if (a[i][j] == "♚")
								koko++;
							if (a[i][j] == "♔")
								kokoko++;
						}
					}
					if (koko == 1 && kokoko == 0) {
						cout << "				FELICITARI" << "\n" << "			NEGRUL ESTE CASTIGATOR";
						break; 
					}
					if (koko == 0 && kokoko == 1) {
						cout << "				FELICITARI" << "\n" << "			ALBUL ESTE CASTIGATOR";
						break; 
					}
					if (koko == 1 && kokoko == 1) { koko = 0; kokoko = 0; }

                    afis(a); //afisaj temporar?

                    /*
					for (i = 1; i <= 8; i++) {

						cout << "\n"; cout << "\n" << "| "; //afisaj temporar
						for (j = 1; j <= 8; j++) {
							if (a[i][j] == "")
								cout << "  ";
							cout << a[i][j] << " | ";
						}

					}
                    */
                    
                    cout << "urmatorul jucator sa aleaga o piesa"; cin >> curLine >> curCol;

					cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol; ok = 0;
				}
				//else {
				//	cout << "ai incercat sa muti piesa adversarului (adica sa trisezi), JOC TERMINAT, ALB CASTIGATOR";
				//	break;
				//}
				//randul jucatorului negru


			}
			// 1/2 din partea III(black)
			 


			if (ok % 2 == 0) {
				if (moveLine == 1)
				if (a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙") {
					k2 = 0;
					if (a[moveLine][moveCol] == "" && curCol == moveCol && curLine - 1 == moveLine) {
						cout << "alege in ce tip de piesa vrei ca pionul tau sa se transforme, poti alege intre: R1, N1, B1 si WQ";
						cin >> a[moveLine][moveCol];
						if (a[moveLine][moveCol] != "♖" && a[moveLine][moveCol] != "♘" && a[moveLine][moveCol] != "♗" && a[moveLine][moveCol] != "♕") { cout << " nu ai ales o piesa valabila, incearca din nou";
						cin >> a[moveLine][moveCol];
						}
						else {
							a[curLine][curCol] = "";  ok++;
						}
					}
					else k2++;
					if (curLine - 1 == moveLine && curCol - 1 == moveCol || curCol + 1 == moveCol) {
						if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♛" || a[moveLine][moveCol] == "♚")
							a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = "";  ok++;
					}
					else k2++;
					if (k2 == 2) {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				}
				if (a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙" || a[curLine][curCol] == "♙") {
					k2 = 0;
					if (a[moveLine][moveCol] == "" && curCol == moveCol && curLine - 1 == moveLine) {
						a[moveLine][moveCol] = a[curLine][curCol];  a[curLine][curCol] = "";  ok++;
					}
					else k2++;
					if (curLine - 1 == moveLine && curCol - 1 == moveCol || curCol + 1 == moveCol) {
						if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♛" || a[moveLine][moveCol] == "♚")
							a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = "";  ok++;
					}
					else k2++;
					if (k2 == 2) {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				}
				//if pentru pioni albi
				if (a[curLine][curCol] == "♖" || a[curLine][curCol] == "♖") {

					k1 = 0;
					if (curLine == moveLine && moveCol > curCol) {
						for (ii = curCol + 1; ii <= moveCol - 1; ii++)
							if (a[moveLine][ii] != "")
								k1++;
					}

					if (moveLine == curLine && moveCol < curCol) {
						for (ii = moveCol + 1; ii <= curCol; ii++)
							if (a[moveLine][ii] != "")
								k1++;
					}

					if (moveCol == curCol && moveLine > curLine) {
						for (ii = curLine + 1; ii <= moveLine - 1; ii++)
							if (a[ii][moveCol] != "")
								k1++;
					}

					if (moveCol == curCol && moveLine < curLine) {
						for (ii = moveLine + 1; ii <= curLine; ii++)
							if (a[ii][moveCol] != "")
								k1++;
					}

					if (moveCol == curCol || moveLine == curLine) {
						if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♛" || a[moveLine][moveCol] == "♚") {
							if (k1 == 0) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
							else {
								cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
								cout << "unde ai vrea sa muti piesa? ";
								cin >> moveLine >> moveCol;
							}
							if (k1 != 0) {
								cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
								cout << "unde ai vrea sa muti piesa? ";
								cin >> moveLine >> moveCol;
							}
						}
						else {
							cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
							cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
						}
					}

					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}

				}
				//if pentru rooks si capture
				if (a[curLine][curCol] == "♘" || a[curLine][curCol] == "♘") {
					if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♛" || a[moveLine][moveCol] == "♚") {
						if (moveLine == curLine + 2 && moveCol == curCol - 1) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine + 2 && moveCol == curCol + 1) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine - 2 && moveCol == curCol - 1) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine - 2 && moveCol == curCol + 1) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine + 1 && moveCol == curCol - 2) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine + 1 && moveCol == curCol + 2) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine - 1 && moveCol == curCol - 2) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
						if (moveLine == curLine - 1 && moveCol == curCol + 2) { a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++; }
					}


					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? ";  cin >> moveLine >> moveCol;
					}
				}
				//if pentru caluti si capture
				if (a[curLine][curCol] == "♗" || a[curLine][curCol] == "♗")
					if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♛" || a[moveLine][moveCol] == "♚") {
						rod = moveLine - curLine;
						cod = moveCol - curCol;
						if (abs(rod) == abs(cod)) {
							int ros = (rod > 0) ? 1 : -1;
							int cos = (cod > 0) ? 1 : -1;

							ro = curLine + ros;
							co = curCol + cos;
							obs = false;


							while (ro != moveLine) {
								if (a[ro][co] != "") {
									obs = true;
									break;
								}
								ro += ros;
								co += cos;
							}

							if (obs) {
								cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
								cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
							}
							else {
								// Move the bishop if the diagonal path is clear
								a[moveLine][moveCol] = a[curLine][curCol];
								a[curLine][curCol] = "";
								ok++;
							}
						}
						else {
							cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
							cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
						}
					}
					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				//if pentru nebunatici si captureee
				if (a[curLine][curCol] == "♕")
					if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♛" || a[moveLine][moveCol] == "♚") {
						rod = moveLine - curLine;
						cod = moveCol - curCol;

						if (rod == 0 || cod == 0 || abs(rod) == abs(cod)) {
							ros = (rod == 0) ? 0 : (rod > 0) ? 1 : -1;
							cos = (cod == 0) ? 0 : (cod > 0) ? 1 : -1;

							ro = curLine + ros;
							co = curCol + cos;
							obs = false;

							while (ro != moveLine || co != moveCol) {
								if (a[ro][co] != "") {
									obs = true;
									break;
								}
								ro += ros;
								co += cos;
							}

							if (obs) {
								{
									cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
									cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
								}
							}
							else {

								a[moveLine][moveCol] = a[curLine][curCol];
								a[curLine][curCol] = "";
								ok++;
							}
						}
					}
					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				//queen code 
				if (a[curLine][curCol] == "♔")
					if (a[moveLine][moveCol] == "" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♟️" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♜" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♞" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♝" || a[moveLine][moveCol] == "♛" || a[moveLine][moveCol] == "♚") {
						if (moveLine == curLine + 1 || moveLine == curLine - 1 || moveCol == curCol + 1 || moveCol == curCol + 1) {
							a[moveLine][moveCol] = a[curLine][curCol]; a[curLine][curCol] = ""; ok++;
						}
						else {
							cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
							cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
						}
					}
					else {
						cout << "piesa nu poate fi mutata in patratica ceruta, incearca alta patratica: "; cout << "daca nu se poate misca piesa tasteaza Y, altfel tasteaza N "; cin >> id; if (id == "Y") { cout << "care sunt coordonatele noii piese alese? "; cin >> curLine >> curCol; }
						cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol;
					}
				//king code 


				if (ok == 1) {
					for (i = 1; i <= 8; i++)
						for (j = 1; j <= 8; j++) {
							if (a[i][j] == "♚")
								koko++;
							if (a[i][j] == "♔")
								kokoko++;
						}
					if (koko == 1 && kokoko == 0) {
						cout << "				FELICITARI" << "\n" << "			NEGRUL ESTE CASTIGATOR";
						break; 
					}
					if (koko == 0 && kokoko == 1) {
						cout << "				FELICITARI" << "\n" << "			ALBUL ESTE CASTIGATOR";
						break; 
					}
					if (koko == 1 && kokoko == 1) { koko = 0; kokoko = 0; }
					if (koko == 0 && kokoko == 0)cout << "???";

                    afis(a); 

					// for (i = 1; i <= 8; i++) {

					// 	cout << "\n"; cout << "\n" << "| "; //afisaj temporar
					// 	for (j = 1; j <= 8; j++) {
					// 		if (a[i][j] == "")
					// 			cout << "  ";
					// 		cout << a[i][j] << " | ";
					// 	}

					// }
                    
                    cout << "urmatorul jucator sa aleaga o piesa"; cin >> curLine >> curCol;

					cout << "unde ai vrea sa muti piesa? "; cin >> moveLine >> moveCol; ok = 1;
				}
				//else {
				//	cout << "ai incercat sa muti piesa adversarului (adica sa trisezi), JOC TERMINAT, NEGRU CASTIGATOR";
				//	break;
				//}
				
				if(ok>2){
					cout << "a avut loc o eroare, va rugam adresati-va dezvoltatorului 2 " << "\n" << "GAME OVER"; break;
				}

			}
			// 1/2 din partea III(white)
		}
		//partea III

        afis(a);

		// for (i = 1; i <= 8; i++) {

		// 	cout << "\n"; cout << "\n" << "| "; 
		// 	for (j = 1; j <= 8; j++) {
		// 		if (a[i][j] == "")
		// 			cout << "  ";
		// 		cout << a[i][j] << " | ";
		// 	}

		// }
		cout << k;
		// tabla finala
		return 0;
	}
