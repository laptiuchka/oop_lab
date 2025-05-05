#ifndef PRINTABLE_H
#define PRINTABLE_H

class Printable {
public:
    virtual void printType() const = 0;
    virtual ~Printable() = default;
};

#endif // PRINTABLE_H