#include<iostream>
using namespace std;
# define MAX 100

class OneDArray{
	private:
		int* data;
		int next;
		
	public:
		void Create(void){
			int size;
			cout << "Input size: ";
			cin >> size;
			data = new (nothrow) int [size+1];
			if(!data){
				cout << "Allocation failed" << endl;
			}
			else{
				cout << "Creation Successful" << endl;
			}
			for(i=0;i<sizeof(data);i++){
				cout << "Enter data[" << i << "]: ";
				cin >> data;
			}
			next = sizeof(data);
		}
		
		void Read(void){
			for(int i=0;i<sizeof(data);i++){
				cout << "data[" << i << "]: " << data[i] << endl;
			}
		}
		
		void Update(void){
			int value;
			cout << "Enter value: ";
			cin >> value;
			int* temp;
			
			
		}
		
		void Delete(void){
			
		}
		
		int& Get(void){
			return *array;
		}
		
		void Set(int* parameter){
			
		}
		
		int& operator [] (int index){
			int* temp;
			temp = new int [index+1];
			for(int i=0;i<next;i++){
				temp[i] = data[i];
			}
			for(int i=next;i<index;i++){
				temp[i] = 0;
			}
			delete [] data;
			data = temp;
			return data[index];
		}
};

class Searching{
	private:
		void Swap(int* parameter1, int* parameter2){
			int* temp = parameter1;
			parameter1 = parameter2;
			parameter2 = temp;
		}
		
	public:
		// In nested loop, compare min with remaining	
		void Selection(int* data, int size){
			for(int i=0;i<size;i++){
				min = i;
				for(int j = i + 1 ;j<size;j++){
					if(data[j] < data[min]){
						min = j;
					}
				}
				Swap(data[i],data[min]);
			}
		}
		
		// In nested loop, compare insert with remaining, shift them to right and insert in gap
		void Insertion(int* data, int size){
			for(int i=0;i<size;i++){
				insert = data[i];
				for(int j = i - 1 ; j>=0 && insert < data[j] ; j--){
					data[j + 1] = data[j];
				}
				data[j] = insert;
			}
		}
		
		
};

class Sorting{
	
};

class JaggedArray{
	
};

class Backtracking{
	
};

class BasicManipulation{
	
};

class AdvancedManipulation{
	
};

int main(){
	
}
