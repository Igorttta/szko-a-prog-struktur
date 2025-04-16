#include <iostream>

int zad2(int n)
{
   
    int m = 929273;
    while (n > 0) {
        m = m * 10 + n % 10;
        n /= 10;
        if (m % 2 == 0)
        {
            std::cout << m;
        }
    }
    

}
int main()
{
    zad2();
}

