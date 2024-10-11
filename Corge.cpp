//
// Created by jeana on 11/10/2024.
//

#include "Corge.h"
Corge::Corge(Foo &foo) {
	this->foo = &foo;
}

Foo* Corge::getFoo() {
	return this->foo;
}
void Corge::setFoo(Foo &foo) {
	if(&foo == nullptr) return;
	this->foo = &foo;
}
