//
// Created by Giyoung Lee on 4/11/22.
//

#ifndef CPP08_EX01_SPAN_HPP
#define CPP08_EX01_SPAN_HPP

#include <vector>
#include <queue>

typedef struct SpanInfo_ {
	size_t MAX_SIZE;
	int LONG_SPAN;
	int SORT_SPAN;
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
	int& operator[](unsigned int index);
	int const& operator[](unsigned int index) const;

	unsigned int size() const;
	unsigned int maxSize() const;
	void addNumber(int value);
};

std::ostream &operator<<(std::ostream &os, const Span &span);

#endif //CPP08_EX01_SPAN_HPP
