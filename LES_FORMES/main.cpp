#include "FORME/Losange/Losange.hpp"
#include "FORME/Cercle/Cercle.hpp"
#include "FORME/Carre/Carre.hpp"
#include "FORME/Ovale/Ovale.hpp"
#include "FORME/Rectangle/Rectangle.hpp"
#include "FORME/Trapeze/Trapeze.hpp"
#include "FORME/Triangle/Triangle.hpp"
#include "SOLID/Cylindre/Cylindre.hpp"
#include "SOLID/Sphere/Sphere.hpp"

int main() {
    Losange losange(3.0, 4.0, 90.0);
    losange.display();

    Cercle cercle(5.0);
    cercle.display();

    Carre carre(6.0);
    carre.display();

    Ovale ovale(2.0, 3.0);
    ovale.display();

    Rectangle rectangle(4.0, 5.0);
    rectangle.display();

    Trapeze trapeze(2.0, 3.0, 4.0);
    trapeze.display();

    Triangle triangle(3.0, 4.0, 5.0);
    triangle.display();

    Cylindre cylindre(2.0, 3.0);
    cylindre.display();

    Sphere sphere(4.0);
    sphere.display();

    return 0;
}
