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
    int n;                 // S? b� m?t  
    int x;                 // S? ngu?i choi do�n  
    int soLanDoan;        // S? l?n do�n  
    int soLanToiDa;       // S? l?n do�n t?i da  

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
        cout << "Nguoi 2, h�y do�n so n\n";  
        setColor(15);
        do {  setColor(14);
            cout << "-----------------------------\n";  
            cout << "Nguoi 2, h�y nhap 1 so de do�n: ";  
            cin >> x; 
			setColor(15); 
            soLanDoan++;  
            if (x > n) {  setColor(14);
                cout << "S� ban do�n lon hon so b� mat.\n"; 
				setColor(15); 
            } else if (x < n) {  setColor(14);
                cout << "So ban do�n nho hon so b� mat.\n";  
    setColor(15);
            } else {  setColor(10);
                cout << "Ch�c mung! Ban d� do�n d�ng trong " << soLanDoan << " lan.\n"; 
    cout << " __        __  _   _   _   _   _  _____  _____ \n";
    cout << " \\ \\      / / | | | \\ | | | \\ | ||  ___| |  __ \\\n";
    cout << "  \\ \\ /\\ / /  | | |  \\| | |  \\|| | |__ | |__ ) |\n";
    cout << "   \\ V  V /   | | | |\\  | | |\\  ||  __|  |  _  /\n";
    cout << "    \\_/\\_/    |_| |_| \\_| |_| \\_||______||_|  \\_\\\n";
				  setColor(15);
                return;  
            }  

            // Ki?m tra s? lu?t c�n l?i  
            if (soLanDoan >= soLanToiDa) {  
                char luaChon;  setColor(1);
                cout << "Ban d� het luot do�n. C� muon xem quang c�o de c� th�m 3 luot do�n kh�ng? (y/Y de hien thi): ";  
                cin >> luaChon;  
                setColor(15);

                if (luaChon == 'y' || luaChon == 'Y') {  setColor(13);
                    cout << "�ang hien thi quang c�o...\n";  
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
                    cout << "Ban d� c� th�m 3 luot do�n!\n";  
                    setColor(15);
                    soLanToiDa += 3;  
                } else {  setColor(12);
                    cout << "Game over! Cam on ban d� choi!\n" << endl; // N?u kh�ng xem qu?ng c�o, k?t th�c tr� choi  
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

        } while (soLanDoan < soLanToiDa); // V�ng l?p ti?p t?c cho d?n khi ngu?i choi do�n d�ng ho?c h?t lu?t  
        setColor(12);
        cout << "Ban d� het luot do�n. So b� mat l�: " << n << endl;  
        setColor(15);
    }  

    void choiVoiMay(bool kho) {  
        srand(static_cast<unsigned int>(time(0)));  
        n = rand() % 100 + 1; // S? b� m?t t? 1 d?n 100  
        soLanDoan = 0; // �?t l?i s? l?n do�n cho m?i v�n  
        soLanToiDa = kho ? 10 : 5; // Thi?t l?p s? l?n do�n t?i da  
        setColor(14);

        cout << "M�y d� chon 1 so b� mat trong khoang tu 1 den 100.\n";  
        setColor(15);

        do {  setColor(14);
            cout << "-----------------------------\n";  
            cout << "Ban h�y nhap mot so de do�n: ";  
            cin >> x;  
            setColor(15);
            soLanDoan++;  
            if (x > n) {  
            setColor(14);
                cout << "So ban do�n lon hon so b� mat.\n";  
                setColor(15);
            } else if (x < n) {  setColor(14);
                cout << "So ban do�n nho hon so b� mat.\n"; 
				setColor(15); 
            } else {  setColor(10);
                cout << "Ch�c mung! Ban d� do�n d�ng trong " << soLanDoan << " lan.\n";  
    cout << " __        __  _   _   _   _   _  _____  _____ \n";
    cout << " \\ \\      / / | | | \\ | | | \\ | ||  ___| |  __ \\\n";
    cout << "  \\ \\ /\\ / /  | | |  \\| | |  \\|| | |__ | |__ ) |\n";
    cout << "   \\ V  V /   | | | |\\  | | |\\  ||  __|  |  _  /\n";
    cout << "    \\_/\\_/    |_| |_| \\_| |_| \\_||______||_|  \\_\\\n";
                setColor(15);
                return;  
            }  

            // Ki?m tra s? lu?t c�n l?i  
            if (soLanDoan >= soLanToiDa) {  
                char luaChon;  setColor(14);
                cout << "Ban d� het luot do�n. C� muon xem quang c�o de c� th�m 3 luot do�n kh�ng? (y/Y de hien thi): ";  
                cin >> luaChon;  
setColor(15);
                if (luaChon == 'y' || luaChon == 'Y') {  setColor(13);
                    cout << "�ang hien thi quang c�o...\n";  
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
                    cout << "Ban d� c� th�m 3 luot do�n!\n"; 
					setColor(15); 
                    soLanToiDa += 3;  
                    
                } else {  setColor(12);
                    cout << "Game over! Cam on ban d� choi!\n"<< endl; // N?u kh�ng xem qu?ng c�o, k?t th�c tr� choi  
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

        } while (true); // V�ng l?p ti?p t?c cho d?n khi ngu?i choi do�n d�ng  
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
    cout<< " C�ch choi: Tro choi don gian cho ph�p nguoi choi do�n mot so ngau nhi�n do may tao ra. Nguoi choi se nhap so v� nhin   phan hoi lieu so d� lon hon hay nho hon so voi so b� mat."<<endl;
        cout << "Chon che do choi:\n";  
        cout << "Nhan ph�m 1: Choi voi nguoi kh�c\n";  
        cout << "Nhan ph�m 2: Choi voi m�y\n";  
        cout << "Lua chon cua ban: ";  
        cin >> cheDo;  
        setColor(15);

        if (cheDo == 1) {  
            int soLanToiDaChoivoinguoi;  
            setColor(14);
            cout << "Nhap so luot do�n toi da cho nguoi choi: ";  
            cin >> soLanToiDaChoivoinguoi; // Nh?p s? lu?t t?i da cho ch? d? ngu?i choi  
            setColor(15);
            soLanToiDa = soLanToiDaChoivoinguoi; // G�n s? lu?t t?i da cho bi?n tuong ?ng  
            choiVoiNguoi();  // B?t d?u choi v?i ngu?i kh�c  
        } else if (cheDo == 2) {  
            int mucDo;  
            setColor(14);
            cout << "Chon muc do kh�:\n";  
            cout << "Nhan 1: De\n";  
            cout << "Nh?n 2: Kh�\n";  
            cout << "Lua chon cua ban: ";  
            cin >> mucDo;  
setColor(15);
            if (mucDo == 1) {  
                choiVoiMay(false);   
            } else if (mucDo == 2) {  
                choiVoiMay(true);   
            } else {  setColor(12);
                cout << "Lua chon kh�ng hop le.\n";  
                setColor(15);
            }  
        } else {  setColor(12);
            cout << "Che do kh�ng hop le.\n";  
            setColor(15);
        }  
    }  
};  

int main() {  
    GameDoanSo game;  
    game.chonCheDoChoi();  
    return 0;  
}
