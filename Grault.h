//
// Created by jeana on 11/10/2024.
//

#ifndef VIRTUAL2__GRAULT_H_
#define VIRTUAL2__GRAULT_H_

class Grault {
    private:
        Foo *foo_;

    public:
        Grault(Foo *foo);
        ~Grault() = default;
};

#endif //VIRTUAL2__GRAULT_H_
