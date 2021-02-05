#include <iostream>
using namespace std;
int main() {

    int cevap;
    cout << "Merhaba... Bir unlu tahmin et ! Simdi onun kim oldugunu bulacagim...\n";
    cout << "Sordugum sorulara evet veya hayir cevabi vereceksin\n";
    cout << "Evet icin 1, Hayir icin 2.\n";

    cout << "Aklindaki unlu marvel karakteri mi?\n";
    cin >> cevap;
    if(cevap == 1){
        cout << "Sakali var mi?\n";
        cin >> cevap;
        if (cevap == 1){
            cout << "Sanirim buldum...... Iron-Man\n";
        }
        else{
            cout << "Sanirim buldum...... Hulk\n";
        }
    }
    else{
        cout << "Aklindaki unlu bir futbolcu mu?\n";
        cin >> cevap;
        if(cevap == 1){
            cout << "Sanirim buldum...... Lionel Messi\n";
        }
        else{
            cout << "Hala yasiyor mu?\n";
            cin >> cevap;
            if (cevap == 1){
                cout << "Bilim Adami mi?\n";
                cin >> cevap;
                if (cevap == 1){
                    cout << "Sanirim buldum...... Elon Musk\n";
                }
                else{
                    cout << "Sanirim buldum...... Ilber Ortayli\n";
                }
            }
            else{
                cout << "Bilim Adami mi?\n";
                cin >> cevap;
                if (cevap == 1){
                    cout << "Sanirim buldum...... Albert Einstein\n";
                }
                else{
                    cout << "Sanirim buldum...... Pewdiepie\n";
                }
            }
        }
    }


    return 0;
}
