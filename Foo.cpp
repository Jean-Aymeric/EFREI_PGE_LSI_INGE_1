//
// Created by jeana on 11/10/2024.
//

#include "Foo.h"

Foo::Foo(const Bar &bar) {
	this->bar = &bar;
	this->bazs = std::vector<Baz*>(); 
	this->qux = new Qux();
	this->graults = std::vector<Grault*>();
}

void Foo::addBaz(Baz &baz) {
	this->bazs.push_back(&baz);
}

Foo::~Foo(){
	delete(this->qux);
}
void Foo::setCorge(Corge &corge) {
	this->corge = &corge;
	if(this->corge->getFoo()== this) return;
	this->corge->setFoo(this);
}
Corge *Foo::getCorge() {
	return this->corge;
}

void Foo::addGrault() {
	this->graults.push_back(new Grault(this));
}
