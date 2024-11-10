#include <stdio.h>
#include <stdint.h>

struct FixedStack {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	const  size_t Size = 1;
	T Item[Size] = { 0, };
	intmax_t P = 0;
};

template<class T ,size_t N>
FixedStack CosnteuctFixedStack<T, N>() {
	FixedStack F = { T,N };

	return F;
}

bool Free(FixedStack& In) {
	Free(In);

	return true;
}

bool Push(FixedStack& In, In.T Value) {
	if (In.P >= In.Size) { return false; }
	In.Item[In.P] = Value;
	In.P++;

	return true;
}
bool Pop(FixedStack& In) {
	if (In.P <= 0) { return false; }
	In.P--;

	return true;
}
In.T& Top(FixedStack& In) {
	return  In.Item[In.P];
}

struct FixedQueue {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	const  size_t Size = 1;
	T Item[Size] = { 0, };
	intmax_t P = 0;
};

template<class T ,size_t N>
FixedStack CosnteuctFixedQueue<T, N>() {
	FixedQueue F = { T,N };

	return F;
}

bool Free(FixedQueue& In) {
	Free(In);

	return true;
}

bool Push(FixedQueue& In, In.T Value) {
	if (In.P >= In.Size) { return false; }
	In.P++;
	for (size_t i = In.P; i>0; i--) {
		In.Item[i] = In.Item[i - 1];
	}
	In.Item[0] = Value;

	return true;
}
bool Pop(FixedQueue& In) {
	if (In.P <= 0) { return false; }
	In.P--;

	return true;
}
In.T& Top(FixedQueuek& In) {
	return  In.Item[In.P];
}