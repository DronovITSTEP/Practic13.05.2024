#include "MyClass.h"

ostream& operator<<(ostream& out, Circle& c) {
    out << c.radius << " " << c.PI << std::endl;
    return out;
}
istream& operator>>(istream& in, Circle& c) {
    in >> c.radius;
    return in;
}