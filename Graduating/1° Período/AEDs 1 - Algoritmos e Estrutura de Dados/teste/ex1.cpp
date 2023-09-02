#include <iostream>

using namespace std;

class Equipamento{
    private:
        bool ligado;
    public:
        void liga() {
            ligado = true;
        }
        void desliga() {
            ligado = false;
        }
};

class EquipamentoSonoro : public Equipamento {
    private:
        short volume = 5;
        bool stereo;
    public:
        void setVolume(short vol) {
            volume = vol;
        }
        short getVolume() {
            return volume;
        }
        bool getStereo() {
            return stereo;
        }
        void modoMono() {
            stereo = false;
        }
        void modoStereo() {
            stereo = true;
        }
};


int main() {
    EquipamentoSonoro es1;

    es1.liga();
    es1.modoStereo();

    cout << "\n O equipamento esta com o volume " << es1.getVolume() << " e esta no modo " << es1.getStereo() << endl;

    es1.modoMono();
    es1.setVolume(10);

    cout << "\n O equipamento esta com o volume " << es1.getVolume() << " e esta no modo " << es1.getStereo() << endl;

    return 0;
}
