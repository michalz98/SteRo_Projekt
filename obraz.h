#ifndef OBRAZ_H
#define OBRAZ_H


class Obraz
{
public:
    bool** p;
    Obraz();
    ~Obraz();
    void dodajPiksel(int x, int  y);                                //rysowanie pojedynczego piksela
    void rysujLinie(int x1, int y1, int x2, int y2);                //rysowanie dowolnej linii
    void rysujProstokat(int x1, int y1, int x2, int y2, bool wypel);  //rysowanie prostokata rownoleglego do osi, wypel=0 - bez wypelniania, wypel=1 - z wypelnieniem
    void rysujOkrag(int x, int y, int r);
    void wyczysc();                                                 //czyszczenie calego obrazu
};

#endif // OBRAZ_H
