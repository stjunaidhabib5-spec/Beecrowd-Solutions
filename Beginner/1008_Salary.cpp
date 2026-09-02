#include<iostream>
#include<iomanip>
using namespace std ; 

int main (){
    int A , B ;
    float C ;

    cin >> A >> B >> C ;

    cout << "NUMBER = " << A << endl ;
    cout << "SALARY = U$ " << fixed << setprecision(2) <<  B*C << endl ;

    return 0 ; 

}