//
// Created by jeana on 11/10/2024.
//

#ifndef VIRTUAL2__CORGE_H_
#define VIRTUAL2__CORGE_H_

#include "Foo.h"
class Corge {
 private:
  Foo *foo;

 public:

  Corge(Foo &foo);
  void setFoo(Foo &foo);
  Foo* getFoo();



};

#endif //VIRTUAL2__CORGE_H_
