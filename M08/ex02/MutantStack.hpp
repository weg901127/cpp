//
// Created by Giyoung Lee on 4/12/22.
//

#ifndef CPP08_EX01_MUTANTSTACK_HPP
#define CPP08_EX01_MUTANTSTACK_HPP

#include <stack>
#include <queue>
template<class T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	MutantStack<T>::iterator begin() {
		return this->c.begin();
	}
	MutantStack<T>::iterator end() {
		return this->c.end();
	}
	MutantStack<T>::reverse_iterator rbegin() {
		return this->c.rbegin();
	}
	MutantStack<T>::reverse_iterator rend() {
		return this->c.rend();
	}
};


#endif //CPP08_EX01_MUTANTSTACK_HPP
