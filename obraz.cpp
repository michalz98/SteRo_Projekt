#include "Obraz.h"

Obraz::Obraz()
{
    p=new bool*[240];
    for(int i=0; i<240; i++)
    {
        p[i]=new bool[320];
    }

    for(int i=0; i<240; i++)
        for(int j=0; j<320; j++)
            p[i][j]=0;
}

Obraz::~Obraz()
{
    for(int i=0; i<240; i++)
    {
        delete[](p[i]);
    }
    delete[](p);
}



void Obraz::dodajPiksel(int x, int  y)
{
    p[x][y]=1;
}


void Obraz::wyczysc()
{
    for(int i=0; i<240; i++)
    {
        for(int j=0; j<320; j++)
        {
            p[i][j]=0;
        }
    }
}

void Obraz::rysujLinie(int x1, int y1, int x2, int y2)
{
    int x;
    int y;
    float pom1, pom2; //wykorzystywane przy rysowaniu linii na ukos, do  okreslenia skali roznic do siebie
    if(x1==x2)
    {
        for(int i=y1; i<=y2; i++)
        {
            p[x1][i]=1;
        }
        return;
    }
    else if(y1==y2)
    {
        for(int i=x1; i<=x2; i++)
        {
            p[i][y1]=1;
        }
        return;
    }
    else
    {
        x=x2-x1;
        y=y2-y1;
        if(x>y)
        {
            pom1=(float)y/x;
            for(int i=0; i<=x; i++)
            {
                pom2=pom1*i;
                if(pom2<((float)((int)pom2)+0.5))
                {
                    p[x1+i][y1+(int)pom2]=1;
                }
                else
                {
                    p[x1+i][y1+(int)pom2+1]=1;
                }
            }
        }
        else if(x<y)
        {
            pom1=(float)x/y;
            for(int i=0; i<=y; i++)
            {
                pom2=pom1*i;
                if(pom2<((float)((int)pom2)+0.5))
                {
                    p[x1+(int)pom2][y1+i]=1;
                }
                else
                {
                    p[x1+(int)pom2+1][y1+i]=1;
                }
            }
        }
        else
        {
            for(int i=0; i<=x;i++)
            {
                p[x1+i][y1+i]=1;
            }
            return;
        }
    }
}
void Obraz::rysujProstokat(int x1, int y1, int x2, int y2, bool wypel)
{
    for(int i=x1; i<=x2; i++)
    {
        p[i][y1]=1;
        p[i][y2]=1;
        if(wypel)
        {
            for(int j=y1; j<=y2; j++)
            {
                p[i][j]=1;
            }
        }
    }
    for(int i=y1; i<=y2; i++)
    {
        p[x1][i]=1;
        p[x2][i]=1;
    }
}
void Obraz::rysujOkrag(int x, int y, int r)
{
    int d = 1 - r;
    int x_t, y_t;
    x_t = 0;
    y_t = r;

    for(int i = 1; x_t < y_t; i++)
    {
        if(d < 0)
        {
            x_t++;
            d += 2*x_t+3;
        }
        else
        {
            x_t++;
            y_t--;
            d +=  2*(x_t - y_t)+5;
        }
        p[x_t+x][y_t+y] = 1;
        p[x_t+x][-y_t+y] = 1;
        p[-x_t+x][y_t+y] = 1;
        p[-x_t+x][-y_t+y] = 1;
        p[y_t+x][x_t+y] = 1;
        p[y_t+x][-x_t+y] = 1;
        p[-y_t+x][x_t+y] = 1;
        p[-y_t+x][-x_t+y] = 1;
    }
}
