#include <iostream>
#include <vector>
    using namespace std;

    int sp; // спецификация
    int sc; // фундаментальные дисциплины
    int hu; // гуманитарные дисциплины
    vector<int> result_sc;
    vector<int> result_hu;

    void spec(int s) {
        int a;
        cout << "Choose your specification:" << endl;
        cout << "1. Science." << endl;
        cout << "2. Humanitarian." << endl;
        cout << "3. End." << endl;
        cin >> a;
        sp = a;
    };

//
    void scien(int science, std::vector<int>& vec) {
        int a;
        cout << "Choose your discipline:" << endl;
        cout << "1. discipline: Maths, class hours: 150" << endl;
        cout << "2. discipline: Chemistry, class hours: 80" << endl;
        cout << "3. discipline: Physics, aclass hours: 110" << endl;
        cout << "4. go back" << endl;
        cin >> a;
        sc = a;
        if (sc < 4) {
            vec.push_back(sc);
            scien(sc, result_sc);
        }
        else {
            spec(sp);
        }

    }

    void hum(int Humanitarian, std::vector<int>& vec) {
        int a;
        cout << "Choose your discipline:" << endl;
        cout << "1. discipline: History, class hours: 90" << endl;
        cout << "2. discipline: Languages, class hours: 160" << endl;
        cout << "3. discipline: Literature, 70" << endl;
        cout << "4. go back" << endl;
        cin >> a;
        hu = a;
        if (hu < 4) {
            vec.push_back(hu);
            hum(hu, result_hu);
        }
        else {
            spec(sp);
        }
    }


    int main() {
        int sum1 = 0;
        int sum2 = 0;
        int sum;

        spec(sp);
        while (sp != 3) {
            if (sp == 1) {
                scien(sc, result_sc);
            } else if (sp == 2) {
                hum(hu, result_hu);
            }
        }
        cout << "Your chosen next discipline:" << endl;

        cout << "Science:" << endl;
        for (int i = 0; i < result_sc.size(); i++) {
            int r;

            r = result_sc[i];
            if (r == 1) {
                sum1 += 150;
                cout << "1. Maths" << endl;
            } else if (r == 2) {
                sum1 += 80;
                cout << "2. Chemistry" << endl;
            } else if (r == 3) {
                sum1 += 110;
                cout << "3. Physics" << endl;
            }
        }
        cout << endl;
        cout << "Humanitarian:" << endl;
        for (int i = 0; i < result_hu.size(); i++) {
            int r;

            r = result_hu[i];
            if (r == 1) {
                sum2 += 90;
                cout << "1. History" << endl;
            } else if (r == 2) {
                sum2 += 160;
                cout << "2. Language" << endl;
            } else if (r == 3) {
                sum2 += 70;
                cout << "3. Literature" << endl;
            }
        }
        sum = sum1 + sum2;
        cout << "Your summary study hours is:" << endl;
        cout << sum << endl;
    }
