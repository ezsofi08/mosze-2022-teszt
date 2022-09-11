#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //NELEMENTS helyett N_ELEMENTS
    int *b = new int[NELEMENTS];
    
    //aposztof helyett idézőjel, sor végén hiányzó pontosvessző
    std::cout << '1-100 ertekek duplazasa'
        
    //hiányos for ciklus
    for (int i = 0;)
    {
        //i*2 helyett (i+1)*2
        b[i] = i * 2;
    }
    //i helyett i<100
    for (int i = 0; i; i++)
    {
        // az eredmény nincs kiírva
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //atlag nincs deklarálva
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
