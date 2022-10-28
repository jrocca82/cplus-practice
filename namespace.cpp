#include <iostream>

namespace myNamespace{
    void greetings() {
        std::cout << "Greetings from my namespace" << std::endl;
    }
}

namespace newNamespace{
    void greetings() {
        std::cout << "Greetings from the new namespace" << std::endl;
    }
}

int main ()
{
    myNamespace::greetings();
    newNamespace::greetings();
}