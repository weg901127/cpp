//
// Created by Giyoung Lee on 4/11/22.
//

#ifndef CPP08_EX01_SPAN_HPP
#define CPP08_EX01_SPAN_HPP

#include <vector>
#include <queue>

typedef struct SpanInfo_ {
	int LONG_SPAN;
	int SHORT_SPAN;
}SpanInfo;

class Span {
private:
	std::vector<int> num;
	SpanInfo span;
public:
	Span();
	~Span();
	Span(unsigned int N);
	Span(Span const& src);
	Span& operator=(Span const& src);
	//int& operator[](unsigned int index);
	int const& operator[](unsigned int index) const;

	unsigned int size() const;
	unsigned int maxSize() const;
	void addNumber(int value);
	int shortestSpan() const;
	int longestSpan() const;
	void complete();
};

std::ostream &operator<<(std::ostream &os, const Span &span);

#endif //CPP08_EX01_SPAN_HPP
