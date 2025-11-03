#include <bits/stdc++.h>
using namespace std;
//Jundi Erlangga Luhur prawira
//25/561570/TK/63456
struct studentType{
    string studentFname;
    string studentLname;
    int testScore;
    char grade;
};
studentType classlist[20];

char assigngrade(int score){
    if(score <= 100 && score >95) return 'A';
    else if(score <=95 && score > 90) return 'B';
    else if(score <= 90 && score >80) return 'C';
    else if (score <= 80 && score >70) return 'D';
    else return 'E';
}
void readtoarray(int n){
    for (int i = 0; i<n; i++){
        cout << "masukkan nama murid ke-" << i+1 << endl;
        cin >> classlist[i].studentFname >> classlist[i].studentLname;
        cout << "masukkan score murid ke-" << i+1 << endl;
        cin >> classlist[i].testScore;
        classlist[i].grade = assigngrade(classlist[i].testScore);
    }
    cout << "terimakasih sudah input data, berikut nama-nama siswa yang kamu input:"<< endl;
    for (int i = 0; i<n; i++) cout << classlist[i].studentLname << ", " <<classlist[i].studentFname << endl;
}

void studenthighest(int indexmaks){
    cout << "Siswa tersebut adalah: " << classlist[indexmaks].studentLname << ", " <<classlist[indexmaks].studentFname;
}

void highestscore(int n){
    int max = classlist[0].testScore;
    int indexmaks = 0;
    for (int i = 0; i < n; i++ ){
        if (classlist[i].testScore > max){
            max = classlist[i].testScore;
            indexmaks = i;
        }
    }
    cout << "Nilai tertinggi adalah: " << max << "dengan grade: " << classlist[indexmaks].grade << endl;
    studenthighest(indexmaks);
}
int main(){
    readtoarray(20);
    highestscore(20);

}
