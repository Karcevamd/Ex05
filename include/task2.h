#ifdef TASK2_H
#define TASK2_H

template <class T>
T averageArr(T* arg, unsign long long size ) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arg[i];
	}
	return sum / size;
}

#endif // TASK2_H