#include "Counter.h"


Counter::Counter() : counter{ 1 } {}

Counter::Counter(int _counter) : counter{ _counter } {}

Counter Counter::operator++(int) { return ++counter; }

Counter Counter::operator--(int) { return --counter; }

void Counter::set(int value) { counter = value; }

int Counter::get() { return counter; }
