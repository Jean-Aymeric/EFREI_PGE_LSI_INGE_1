//
// Created by jeana on 11/10/2024.
//

#ifndef VIRTUAL2__FOO_H_
#define VIRTUAL2__FOO_H_

#include <vector>
#include "Bar.h"
#include "Baz.h"
#include "Qux.h"
#include "Corge.h"

class Foo {
 private:
  const Bar *bar;
  const Qux *qux;
  std::vector<Baz*> bazs;
  Corge *corge;
  std::vector<Grault*> graults; 

 public:
  Foo(const Bar &bar);
  void addBaz(Baz &baz);
  void setCorge(Corge &corge);
  Corge* getCorge();
  void addGrault();

  ~Foo();

};

#endif //VIRTUAL2__FOO_H_
