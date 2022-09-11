#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //NELEMENTS helyett N_ELEMENTS
    int *b = new int[N_ELEMENTS];
    
    //aposztof helyett idézőjel, sor végén hiányzó pontosvessző
    std::cout << "1-100 ertekek duplazasa \n";
        
    //hiányos for ciklus
    for (int i = 0;i<100;i++)
    {
        //i*2 helyett (i+1)*2
        b[i] = (i+1) * 2;
    }
    //i helyett i<100
    for (int i = 0; i<100; i++)
    {
        // az eredmény nincs kiírva
        std::cout << "Ertek:"
        std::cout << b[i];
        std::cout << "\n"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //atlag nincs deklarálva
    int atlag=0;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
