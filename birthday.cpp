#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string link = "https://parth-malguzar.github.io/Birthday/";

    string lines[] = {
        "============================================",
        "      🎉🎂 HAPPY BIRTHDAY Nandini 🎂🎉     ",
        "============================================",
        "Wishing you a very happy birthday!",
        ("Open this link so that I can hack your account 🤑 : " + link),
        "Enjoy your special day! 🎈🎁",
        "============================================"
    };

    for (const string &ln : lines) {
        for (char c : ln) {
            cout << c << flush;
            Sleep(35);
        }
        cout << '\n';
        Sleep(250);
    }

    return 0;
}
