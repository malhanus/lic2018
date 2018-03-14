#ifndef SINGLEVERTICE_H
#define SINGLEVERTICE_H

// Klasa przechowuj¹ca pojedynczy wierzcho³ek.


class singleVertice
{
    public:
        singleVertice();
        singleVertice(float pozX, float pozY, float pozZ, float normX, float normY, float normZ, float tcX, float tcY);
        virtual ~singleVertice();

        void setPozX (float );
        void setPozY (float );
        void setPozZ (float );
        void setNormX (float );
        void setNormY (float );
        void setNormZ (float );
        void setTcX (float );
        void setTcY (float );

        float getPozX ();
        float getPozY ();
        float getPozZ ();
        float getNormX ();
        float getNormY ();
        float getNormZ ();
        float getTcX ();
        float getTcY ();




    protected:

    private:
        float pozX;
        float pozY;
        float pozZ;
        float normX;
        float normY;
        float normZ;
        float tcX;
        float tcY;


};

#endif // SINGLEVERTICE_H
