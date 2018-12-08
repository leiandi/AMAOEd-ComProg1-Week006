//Name:Jameson M. Villaluna
//Date: November 8,2018
#include<iostream>
#include<string>

using namespace std;

main(){
    string StudentName,Course,YearName;
    int YearLevel;
    float TFee,Units,Down,Balance;

    cout << "Student Name\t: ";
    getline (cin,StudentName);
    cout << "Program/Course\t: ";
    getline (cin,Course);
    cout << "Year Level\t: ";
    cin >> YearLevel;
    cout << "No. of Units\t: ";
    cin >> Units;
    system("cls");
    if (YearLevel==1){
        TFee=1500*Units;
        YearName="Freshman";
    } else if (YearLevel==2){
        TFee=1800*Units;
        YearName="Sophomore";
    }else if (YearLevel==3){
        TFee=2000*Units;
        YearName="Junior";
    }else {
        TFee=2300*Units;
        YearName="Senior";
    }
    Down=TFee*0.3;
    Balance=TFee-Down;
    cout << "\t\t\tENROLLMENT SLIP" <<"\n";
    cout << "Student Name\t: " << StudentName << "\n";
    cout << "Program/Course\t: " << Course << "\n";
    cout << "Year Name\t: " << YearName << "\n";
    cout << "No. of Units\t: " << Units << "\n";
    cout << "Tuition Fee\t: " << TFee << "\n";
    cout << "Down Payment\t: " << Down << "\n";
    cout << "Balance\t\t: " << Balance << "\n";
    system("pause");
    return 0;
}