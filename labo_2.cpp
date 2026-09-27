
#include <iostream>
#include  <cmath>

using namespace std;


int main() {
    int dx = 3; int dy = 10;
    int l1 =  6 ; double l2;
    int cout_a = 3; int cout_b ;
    const int vitesse1 =5;
    const int vitesse2 =2;

    cout << "Bonjour , ce programme calcule le temps pour un trajet . "<< endl;


 cout_b = dy - l1;
    l2 =  sqrt (cout_a * cout_a + cout_b * cout_b); /** calcule du longeur l2 **/


    double temps1 ;
    temps1 = (double) l1 / vitesse1;


  double temps2 ;
    temps2 = l2 / vitesse2;


    double temps_total;
    temps_total = temps1 + temps2;

    cout << "le temps total est : " << temps_total << "h"<<endl;


    return EXIT_SUCCESS;
}