#include <ostream>
#include "List.h"

using namespace std;

template <typename T> 
class ListArray : public List<T> {

    private:
        // miembros privados
	T* arr;
	int max;
	int n;
	static const int MINSIZE = 2;
	void resize(int new_size){
		
		T arr1 = new T[new_size];
		int i;

		for(i = 0; i < MINSIZE; i++){
			arr1[i] = arr[i];
		}

		delete []arr;

		arr = arr1;
		max = new_size;
	}

    public:
        // miembros públicos, incluidos los heredados de List<T>
	ListArray(){
		 n = 0;
		 max = MINSIZE;
		this->arr = new T[MINSIZE];
	}
	
	~ListArray(){
		delete []arr;
	}

	T operator[](int pos){
		if(pos < 0 || pos > n-1){
			throw out_of_range("Fuera de rango");
		}
		else
			return arr[pos];
	}

	friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list){
			out<<list.arr;
			return out;
	}
    
};
