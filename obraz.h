#ifndef OBRAZ_H
#define OBRAZ_H


struct color
{
    int red;
    int green;
    int blue;
};

class Obraz
{
public:
    bool** p;
    color** c;
    Obraz();
    ~Obraz();
    void dodajPiksel(int x, int  y);
    void dodajPiksel(int x, int  y, int r, int g, int b);            //rysowanie pojedynczego piksela o wybranym kolorze
    void rysujLinie(int x1, int y1, int x2, int y2);                 //rysowanie dowolnej linii
    void rysujProstokat(int x1, int y1, int x2, int y2, bool wypel); //rysowanie prostokata rownoleglego do osi, wypel=0 - bez wypelniania, wypel=1 - z wypelnieniem
    void rysujOkrag(int x, int y, int r);
    void wyczysc(); //czyszczenie calego obrazu
    bool doWyczyszczenia;
};

#endif // OBRAZ_H
