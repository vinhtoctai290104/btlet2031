#include <iostream>  
#include <cstdlib>  
#include <ctime>  
#include <iomanip> // Thu vi?n cho std::setw  
#include <windows.h>   
#include <cmath>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;  
void setColor(int color) {  
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);  
}  

class GameDoanSo {  
private:  
    int n;                 // S? bí m?t  
    int x;                 // S? ngu?i choi doán  
    int soLanDoan;        // S? l?n doán  
    int soLanToiDa;       // S? l?n doán t?i da  

public:  
    GameDoanSo() : n(0), x(0), soLanDoan(0), soLanToiDa(0) {} // Kh?i t?o  

    void nhapSoNguoi1() {  
    setColor(14);
        cout << "=============================\n";  
        cout << "Nguoi 1, hay nhap so bi mat (n): ";  
        cin >> n;  
        cout << "=============================\n";  
        setColor(15);
    }  

    void choiVoiNguoi() {  
        nhapSoNguoi1();  
        setColor(14);
        cout << "Nguoi 2, hãy doán so n\n";  
        setColor(15);
        do {  setColor(14);
            cout << "-----------------------------\n";  
            cout << "Nguoi 2, hãy nhap 1 so de doán: ";  
            cin >> x; 
			setColor(15); 
            soLanDoan++;  
            if (x > n) {  setColor(14);
                cout << "Sô ban doán lon hon so bí mat.\n"; 
				setColor(15); 
            } else if (x < n) {  setColor(14);
                cout << "So ban doán nho hon so bí mat.\n";  
    setColor(15);
            } else {  setColor(10);
                cout << "Chúc mung! Ban dã doán dúng trong " << soLanDoan << " lan.\n"; 
    cout << " __        __  _   _   _   _   _  _____  _____ \n";
    cout << " \\ \\      / / | | | \\ | | | \\ | ||  ___| |  __ \\\n";
    cout << "  \\ \\ /\\ / /  | | |  \\| | |  \\|| | |__ | |__ ) |\n";
    cout << "   \\ V  V /   | | | |\\  | | |\\  ||  __|  |  _  /\n";
    cout << "    \\_/\\_/    |_| |_| \\_| |_| \\_||______||_|  \\_\\\n";
				  setColor(15);
                return;  
            }  

            // Ki?m tra s? lu?t còn l?i  
            if (soLanDoan >= soLanToiDa) {  
                char luaChon;  setColor(1);
                cout << "Ban dã het luot doán. Có muon xem quang cáo de có thêm 3 luot doán không? (y/Y de hien thi): ";  
                cin >> luaChon;  
                setColor(15);

                if (luaChon == 'y' || luaChon == 'Y') {  setColor(13);
                    cout << "Ðang hien thi quang cáo...\n";  
                    cout << "=============================\n";  
                    cout << "        *        .                .    *         .  \n";  
                    cout << "      .       *   .      *        * *    .  *     .  \n";  
                    cout << "     *      * .  '     .    * .     .  *        *  \n";  
                    cout << "       *   .   *                  .     *  . \n";  
                    cout << "      .   .  *    .   *     .      .        .  \n";  
                    cout << "     *      .     .  *   .        *         .  \n";  
                    cout << "     _ ____  __  __  _____ ._          * ____  \n";  
                    cout << "    | |  _ \\|  \\/  || ____|| |      /\\  |  _ \\  \n";  
                    cout << "    | | |_) | |\\/| || |___ | |     /  \\ | |_ )   \n";  
                    cout << "    | |  _ <| |  | || ____|| |    | /\\ || |_  <  \n";  
                    cout << "    | | |_) | |  | || |___ | |___|  __  | |__)   \n";  
                    cout << "    |_|_|__/|_|  |_||_____||_____|_|__|_|_|___/   \n";  
                    cout << "   *    .  *  .    *  *    .  *  .    *    *  \n";  
                    cout << "    *    .  *  .    *   * .       *          *    .  *  .    *  \n";  
                    cout << "     *    .  *  .    *    *      .     .  *      .     *   .   .      *  \n";  
                    cout << "     *    .  *  .    *    *    .  *  .    *   .  .       *     \n";  
                    cout << "     *    .  *  .    *    *    .        *       .                  .  \n";  
                    cout << "       *    .  *  .    *    *      *   .    *      .  \n";  
                    cout << "      *    .  *  .    *   *     .  *      .      *\n";  
                    cout << "=============================\n";  
                    cout << "Ban dã có thêm 3 luot doán!\n";  
                    setColor(15);
                    soLanToiDa += 3;  
                } else {  setColor(12);
                    cout << "Game over! Cam on ban dã choi!\n" << endl; // N?u không xem qu?ng cáo, k?t thúc trò choi  
                     cout << "  ________  ________  _____ ______   _______           ________  ___      ___ _______   ________   \n";  
    cout << "  |\\   ____\\|\\   __  \\|\\   _ \\  _   \\|\\  ___ \\         |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\ \n";  
    cout << "  \\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\__\\ \\  \\ \\   __/|         \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\ \n";  
    cout << "   \\ \\  \\  __\\ \\   __  \\ \\  \\|__| \\  \\ \\  \\_|/__        \\ \\  \\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\ \n";  
    cout << "    \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\    \\ \\  \\ \\  \\_|\\ \\       \\ \\  \\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\  \\| \n";  
    cout << "     \\ \\_______\\ \\__\\ \\__\\ \\__\\    \\ \\__\\ \\_______\\       \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\ _\\ \n";  
    cout << "      \\|_______|\\|__|\\|__|\\|__|     \\|__|\\|_______|        \\|_______|\\|__|/       \\|_______|\\|__|\\|__| \n";     
                    setColor(15);
                    return;  
                }  
            }  

        } while (soLanDoan < soLanToiDa); // Vòng l?p ti?p t?c cho d?n khi ngu?i choi doán dúng ho?c h?t lu?t  
        setColor(12);
        cout << "Ban dã het luot doán. So bí mat là: " << n << endl;  
        setColor(15);
    }  

    void choiVoiMay(bool kho) {  
        srand(static_cast<unsigned int>(time(0)));  
        n = rand() % 100 + 1; // S? bí m?t t? 1 d?n 100  
        soLanDoan = 0; // Ð?t l?i s? l?n doán cho m?i ván  
        soLanToiDa = kho ? 10 : 5; // Thi?t l?p s? l?n doán t?i da  
        setColor(14);

        cout << "Máy dã chon 1 so bí mat trong khoang tu 1 den 100.\n";  
        setColor(15);

        do {  setColor(14);
            cout << "-----------------------------\n";  
            cout << "Ban hãy nhap mot so de doán: ";  
            cin >> x;  
            setColor(15);
            soLanDoan++;  
            if (x > n) {  
            setColor(14);
                cout << "So ban doán lon hon so bí mat.\n";  
                setColor(15);
            } else if (x < n) {  setColor(14);
                cout << "So ban doán nho hon so bí mat.\n"; 
				setColor(15); 
            } else {  setColor(10);
                cout << "Chúc mung! Ban dã doán dúng trong " << soLanDoan << " lan.\n";  
    cout << " __        __  _   _   _   _   _  _____  _____ \n";
    cout << " \\ \\      / / | | | \\ | | | \\ | ||  ___| |  __ \\\n";
    cout << "  \\ \\ /\\ / /  | | |  \\| | |  \\|| | |__ | |__ ) |\n";
    cout << "   \\ V  V /   | | | |\\  | | |\\  ||  __|  |  _  /\n";
    cout << "    \\_/\\_/    |_| |_| \\_| |_| \\_||______||_|  \\_\\\n";
                setColor(15);
                return;  
            }  

            // Ki?m tra s? lu?t còn l?i  
            if (soLanDoan >= soLanToiDa) {  
                char luaChon;  setColor(14);
                cout << "Ban dã het luot doán. Có muon xem quang cáo de có thêm 3 luot doán không? (y/Y de hien thi): ";  
                cin >> luaChon;  
setColor(15);
                if (luaChon == 'y' || luaChon == 'Y') {  setColor(13);
                    cout << "Ðang hien thi quang cáo...\n";  
                    cout << "=============================\n";  
                    cout << "        *        .                .    *         .  \n";  
                    cout << "      .       *   .      *        * *    .  *     .  \n";  
                    cout << "     *      * .  '     .    * .     .  *        *  \n";  
                    cout << "       *   .   *                  .     *  . \n";  
                    cout << "      .   .  *    .   *     .      .        .  \n";  
                    cout << "     *      .     .  *   .        *         .  \n";  
                    cout << "     _ ____  __  __  _____ ._          * ____  \n";  
                    cout << "    | |  _ \\|  \\/  || ____|| |      /\\  |  _ \\  \n";  
                    cout << "    | | |_) | |\\/| || |___ | |     /  \\ | |_ )   \n";  
                    cout << "    | |  _ <| |  | || ____|| |    | /\\ || |_  <  \n";  
                    cout << "    | | |_) | |  | || |___ | |___|  __  | |__)   \n";  
                    cout << "    |_|_|__/|_|  |_||_____||_____|_|__|_|_|___/   \n";  
                    cout << "   *    .  *  .    *  *    .  *  .    *    *  \n";  
                    cout << "    *    .  *  .    *   * .       *          *    .  *  .    *  \n";  
                    cout << "     *    .  *  .    *    *      .     .  *      .     *   .   .      *  \n";  
                    cout << "     *    .  *  .    *    *    .  *  .    *   .  .       *     \n";  
                    cout << "     *    .  *  .    *    *    .        *       .                  .  \n";  
                    cout << "       *    .  *  .    *    *      *   .    *      .  \n";  
                    cout << "      *    .  *  .    *   *     .  *      .      *\n";  
                    cout << "=============================\n";  
                    cout << "Ban dã có thêm 3 luot doán!\n"; 
					setColor(15); 
                    soLanToiDa += 3;  
                    
                } else {  setColor(12);
                    cout << "Game over! Cam on ban dã choi!\n"<< endl; // N?u không xem qu?ng cáo, k?t thúc trò choi  
    cout << "  ________  ________  _____ ______   _______           ________  ___      ___ _______   ________   \n";  
    cout << "  |\\   ____\\|\\   __  \\|\\   _ \\  _   \\|\\  ___ \\         |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\ \n";  
    cout << "  \\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\__\\ \\  \\ \\   __/|         \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\ \n";  
    cout << "   \\ \\  \\  __\\ \\   __  \\ \\  \\|__| \\  \\ \\  \\_|/__        \\ \\  \\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\ \n";  
    cout << "    \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\    \\ \\  \\ \\  \\_|\\ \\       \\ \\  \\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\  \\| \n";  
    cout << "     \\ \\_______\\ \\__\\ \\__\\ \\__\\    \\ \\__\\ \\_______\\       \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\ _\\ \n";  
    cout << "      \\|_______|\\|__|\\|__|\\|__|     \\|__|\\|_______|        \\|_______|\\|__|/       \\|_______|\\|__|\\|__| \n";  
                    setColor(15);
                    return;  
                }  
            }  

        } while (true); // Vòng l?p ti?p t?c cho d?n khi ngu?i choi doán dúng  
    }  

    void chonCheDoChoi() {  
        int cheDo;  
        setColor(14);
        cout << "=============================\n";  
    cout << " __        __  _____ _         _____   ____  __  __   _____\n";
    cout << " \\ \\      / / |  ___|| |      / ____| / __ \\ |  \\/  ||  ___|\n";
    cout << "  \\ \\ /\\ / /  | |_ _ | |     | |     | |  | || |\\/| || |__ \n";
    cout << "   \\ V  V /   |  __| | |____ | | ___ | |  | || |  | ||  __|\n";
    cout << "    \\_/\\_/    |_____||______| \\_____| \\____/ |_|  |_||______|\n";
    cout << "HUONG DAN CHOI GAME "<<endl;
    cout<< " Cách choi: Tro choi don gian cho phép nguoi choi doán mot so ngau nhiên do may tao ra. Nguoi choi se nhap so và nhin   phan hoi lieu so dó lon hon hay nho hon so voi so bí mat."<<endl;
        cout << "Chon che do choi:\n";  
        cout << "Nhan phím 1: Choi voi nguoi khác\n";  
        cout << "Nhan phím 2: Choi voi máy\n";  
        cout << "Lua chon cua ban: ";  
        cin >> cheDo;  
        setColor(15);

        if (cheDo == 1) {  
            int soLanToiDaChoivoinguoi;  
            setColor(14);
            cout << "Nhap so luot doán toi da cho nguoi choi: ";  
            cin >> soLanToiDaChoivoinguoi; // Nh?p s? lu?t t?i da cho ch? d? ngu?i choi  
            setColor(15);
            soLanToiDa = soLanToiDaChoivoinguoi; // Gán s? lu?t t?i da cho bi?n tuong ?ng  
            choiVoiNguoi();  // B?t d?u choi v?i ngu?i khác  
        } else if (cheDo == 2) {  
            int mucDo;  
            setColor(14);
            cout << "Chon muc do khó:\n";  
            cout << "Nhan 1: De\n";  
            cout << "Nh?n 2: Khó\n";  
            cout << "Lua chon cua ban: ";  
            cin >> mucDo;  
setColor(15);
            if (mucDo == 1) {  
                choiVoiMay(false);   
            } else if (mucDo == 2) {  
                choiVoiMay(true);   
            } else {  setColor(12);
                cout << "Lua chon không hop le.\n";  
                setColor(15);
            }  
        } else {  setColor(12);
            cout << "Che do không hop le.\n";  
            setColor(15);
        }  
    }  
};  

int main() {  
    GameDoanSo game;  
    game.chonCheDoChoi();  
    return 0;  
}
