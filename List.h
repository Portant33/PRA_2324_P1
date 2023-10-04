#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
	public:
		virtual void insert(int pos, T e) = 0;
		virtual void append(T e) = 0;
		virtual void prepend(T e) = 0;
		virtual T remove(int pos) = 0;
		virtual T get(int pos) = 0;
		virtual int seatch(T e) = 0;
		virtual bool empty(T e) = 0;
		virtual int size(T e) = 0;
};

#endif