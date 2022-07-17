#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>

int main(){
    
    srand (time(NULL));
    int a,b,c = 1;
    std::string action ="y";
    std::string nama = "user";
    std::string nasib = "baik";
    std::vector<std::string> keberuntungan = {"Besok ngoding lagi"," Besok udahan ngoding uninstall vscode gaboleh install lagi",
    "Besok dapat kabar baik dari yg blum dapet univ","Besok oshi mu notis kamu","Besok waifu/husbu kamu selingkuh",
    "Besok kamu ga nolep lagi (hari ini kiamat) :D","Semester depan UKT makin turun"};

    std::cout<<"Selamat datang di pondok magis Koh Atong\n";
    std::cout<<"........................................\n";
    std::cout<<"\n";
    std::cout<<"Ayo kita ramal masa depan kamu\n";
    std::cout<<"\n";
    std::cout<<"\n";

    while (action == "y" || action == "Y")
    {
        std::cout<<"Siapa nama kamu : "; std::cin>>nama;
        std::cout<<"\n";

        //code
        b = keberuntungan.size();
        a = rand() % b;


        std::cout<<"........................................\n";
        std::cout<<"\n";
        std::cout<<"Halo "<<nama<<"!! Nasib kamu kedepan adalah :\n";
        std::cout<<"\n";
        std::cout<<keberuntungan[a]<<"\n";
        std::cout<<"\n";
        std::cout<<"........................................\n";
        std::cout<<"\n";
        std::cout<<"Masih mau coba lagi? (y/n): ";
        std::cin>>action;
        std::cout<<"\n";
        std::cout<<"\n";
    }
    
    
}