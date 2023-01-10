//Judul
//Deteksi 5 penyakit
//Husin Fadhil A
//5 sept 2022

#include <iostream>
using namespace std;

//Kamus
char p1,p2,p3,p4,p5;

//Deskripsi
int main()

{


    cout << "=============================================" << endl;
    cout << "Jelaskan Gejala Penyakit Anda!" << endl;
    cout << "Apakah anda merasa pusing ?          (y/n) = ";
    cin  >> p1;
    cout << "Apakah anda merasa demam ?           (y/n) = ";
    cin  >> p2;
    cout << "Apakah anda merasa Sesak Nafas ?     (y/n) = ";
    cin  >> p3;
    cout << "Apakah anda merasa Sakit perut ?     (y/n) = ";
    cin  >> p4;
    cout << "Apakah anda merasa sakit BatukPilek ?(y/n) = ";
    cin  >> p5;
    cout << "" << endl << endl;


    if(p1 == 'y'&& p2 == 'y'&& p3 == 'y' && p4 =='n' && p5 =='y'){
            cout << "=====================================================" << endl;
            cout << "GEJALA ANDA MENUNJUKAN COVID-19!";
    }
        else if(p1 == 'y'&& p2 == 'y'&& p3 == 'y' && p4 =='y' && p5 =='n'){
            cout << "=========================================================" << endl;
            cout << "MUNGKIN ANDA TERKENA RADANG PARU-PARU!!!";
    }
    else if(p1 == 'y'&& p2 == 'y'&& p3 == 'n' && p4 =='y' && p5 =='y'){
            cout << "================================" << endl;
            cout << "ANDA MENGIDAP FLU DAN MAAGH";
    }
    else if(p1 == 'y'&& p2 == 'n'&& p3 == 'y' && p4 =='y' && p5 =='y'){
            cout << "=================================================" << endl;
            cout << "ANDA MENGIDAP BRONKITIS!!";
    }
    else if(p1 == 'n'&& p2 == 'y'&& p3 == 'y' && p4 =='y' && p5 =='y'){
            cout << "===========================================" << endl;
            cout << "ANDA MENGIDAP ASMA!";
    }
    else if(p1 == 'n'&& p2 == 'n'&& p3 == 'n' && p4 =='n' && p5 =='y'){
            cout << "======================" << endl;
            cout << "ANDA MENGIDAP FLUA";
    }
    else if(p1 == 'n'&& p2 == 'n'&& p3 == 'n' && p4 =='y' && p5 =='n'){
            cout << "==================" << endl;
            cout << "ANDA MENGIDAP MAAG";
    }
    else if(p1 == 'n'&& p2 == 'n'&& p3 == 'y' && p4 =='n' && p5 =='n'){
            cout << "=================" << endl;
            cout << "ANDA MENGIDAP ASMA";
    }
    else if(p1 == 'n'&& p2 == 'y'&& p3 == 'n' && p4 =='n' && p5 =='n'){
            cout << "==========" << endl;
            cout << "ANDA DEMAM";
    }
    else if(p1 == 'y'&& p2 == 'n'&& p3 == 'n' && p4 =='n' && p5 =='n'){
            cout << "===========" << endl;
            cout << "ANDA PUSING";
    }
    else if(p1 == 'y'&& p2 == 'y'&& p3 == 'n' && p4 =='n' && p5 =='n'){
            cout << "================" << endl;
            cout << "ANDA MASUK ANGIN";
    }
     else if(p1 == 'y'&& p2 == 'y'&& p3 == 'y' && p4 =='n' && p5 =='n'){
            cout << "============================================================================" << endl;
            cout << "GEJALA ANDA MENANDAKAN COVID-19";
    }
    else if(p1 == 'y'&& p2 == 'y'&& p3 == 'n' && p4 =='y' && p5 =='y'){
            cout << "========================================" << endl;
            cout << "ANDA FLU ATAU DB";
    }
    else if(p1 == 'n'&& p2 == 'n'&& p3 == 'y' && p4 =='y' && p5 =='y'){
            cout << "================================" << endl;
            cout << "ANDA MENGIDAP ASMA DAN INFLUENZA";
    }
    else if(p1 == 'n'&& p2 == 'n'&& p3 == 'n' && p4 =='n' && p5 =='n'){
            cout << "===============================================================" << endl;
            cout << "ANDA SEHAT SENTOSA!";
    }
    else if(p1 == 'y'&& p2 == 'y'&& p3 == 'y' && p4 =='y' && p5 =='y'){
            cout << "=================================================" << endl;
            cout << "MUNGKIN ANDA SEDANG PATAH HATI";
    }
    else {
        cout << "========================" << endl;
        cout << "Gejala Tidak Terdeteksi!";
    }



            return 0;

}






